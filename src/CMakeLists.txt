add_library(operations)

target_sources(operations
        PRIVATE
        operations.cpp
        PUBLIC
        operations.hpp
)

target_include_directories(operations
        PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
)

# we use this to get code coverage
# flags are only valid with the GNU compiler and on Linux
if(CMAKE_CXX_COMPILER_ID MATCHES GNU AND CMAKE_HOST_SYSTEM_NAME STREQUAL "Linux")
    target_compile_options(operations
            PUBLIC
            "--coverage"
    )
    target_link_options(operations
            INTERFACE
            "--coverage"
    )
endif()

add_executable(
        main
        main.cpp
        operations.cpp
)
