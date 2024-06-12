FROM alpine:3.19.0 AS buildstage
RUN apk update && \
    apk add --no-cache \
        build-base \
        cmake \
        boost-dev

WORKDIR /calculator
COPY test/ ./test/
COPY src/ ./src/
COPY CMakeLists.txt .
WORKDIR /calculator/build
RUN cmake -DCMAKE_BUILD_TYPE=Release .. && \
    cmake --build . --parallel 2

FROM alpine:3.19.0 AS runstage
RUN apk update && \
    apk add --no-cache \
    libstdc++ \
    boost-program_options
RUN addgroup -S shs && adduser -S shs -G shs
COPY --from=buildstage \
    calculator/build/bin/unit_tests \
    ./app/
USER shs
CMD [ "/app/unit_tests" ]