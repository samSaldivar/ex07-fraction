#include "fractions.h"
#include <iostream>;

int32_t Fraction::getNumerator() const {
    return numerator;
}

int32_t Fraction::getDenominator() const {
    return denominator;
}

void Fraction::setNumerator(int32_t &numerator) {
    this->numerator = numerator;
}

void Fraction::setDenominator(int32_t denominator) {
    this->denominator = denominator;
}

void Fraction::output() {
    if (numerator == 0 && denominator == 0) {
        std::cout << "NAN";
    } else if (numerator == 0) {
        std::cout << numerator;
    } else if (denominator == 0) {
        std::cout << "INF";
    } else if (numerator % denominator == 0) {
        std::cout << numerator / denominator;
    } else if (numerator % denominator != 0) {
        if (numerator > denominator) {
            std::cout << numerator / (numerator - denominator) << " / " << denominator / (numerator - denominator);
        } else if (numerator < denominator) {
            std::cout << numerator / (denominator - denominator) << " / " << denominator / (denominator - denominator);
        }
        std::cout << numerator << " / " << denominator;
    }
}