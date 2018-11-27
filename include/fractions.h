#ifndef UNTITLED1_FRACTIONS_H
#define UNTITLED1_FRACTIONS_H
#include <cstdint>

namespace edu {
    namespace vcccd {
        namespace vc {
            namespace csv13 {
                class Fraction {
                public:
                    Fraction(int32_t numerator, int32_t denominator) {
                        this->numerator = numerator;
                        this->denominator = denominator;
                    }

                public:
                    int32_t getNumerator() const;

                    int32_t getDenominator() const;

                    double getRealValue() const;

                    void setNumerator(int32_t &numerator);

                    void setDenominator(int32_t denominator);

                    void output();

                private:
                    int32_t numerator;
                    int32_t denominator;
                };
            }
        }
    }
}
#endif