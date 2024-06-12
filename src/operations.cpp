#include "operations.hpp"

long long modulo(const long long& lhs, const long long& rhs) {
    return lhs % rhs;
}

long double power(long double value, int degree) {
    if (degree == 0) {
        return 1;
    }

    if (degree > 0) {
        long double help = power(value, degree / 2);
        if (degree % 2 == 0) {
            return help * help;
        }
        return help * help * value;
    }
    degree *= -1;
    long double help = power(value, degree / 2);
    if (degree % 2 == 0) {
        return 1 / (help * help);
    }
    return 1 / (help * help * value);
}
