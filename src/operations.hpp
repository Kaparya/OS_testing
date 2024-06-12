#ifndef SUM_H
#define SUM_H

template <class T>
T sum(const T& lhs, const T& rhs) {
    return lhs + rhs;
}

template <class T>
T subtraction(const T& lhs, const T& rhs) {
    return lhs - rhs;
}

template <class T>
T multiplication(const T& lhs, const T& rhs) {
    return lhs * rhs;
}

template <class T>
T division(const T& lhs, const T& rhs) {
    if (rhs == 0) {
        return T();
    }
    return lhs / rhs;
}

long long modulo(const long long& lhs, const long long& rhs);

long double power(long double value, int degree);

#endif
