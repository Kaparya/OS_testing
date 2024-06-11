#ifndef SUM_H
#define SUM_H

template<class T>
T sum(const T &lhs, const T &rhs) {
    return lhs + rhs;
}

template<class T>
T subtraction(const T &lhs, const T &rhs) {
    return lhs - rhs;
}

template<class T>
T multiplication(const T &lhs, const T &rhs) {
    return lhs * rhs;
}

template<class T>
T division(const T &lhs, const T &rhs) {
    return lhs / rhs;
}

long double power(long double value, int degree);

#endif