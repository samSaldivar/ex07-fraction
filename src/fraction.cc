#include "fractions.h"
#include <iostream>

namespace edu {
    namespace vcccd {
        namespace vc {
            namespace csv13 {
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

                int gcd(int numerator, int denominator) {
                    while (denominator != 0){
                        int temp = numerator%denominator;
                        numerator = denominator;
                        denominator = temp;
                    } return numerator;
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
                        int numNum = numerator / gcd(numerator, denominator);
                        int denNum = denominator / gcd(numerator, denominator);
                        std::cout << numNum << " / " << denNum;
                    }
                }
            }
        }
    }
}

