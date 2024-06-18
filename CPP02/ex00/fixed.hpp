#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class FIXED
{
    private:
        int num;
        static const int bits = 8;
    public:
        Fixed(void);
        Fixed(const Fixed &copy);
        Fixed(int number);

        Fixedd(void);

        int getNumber(void) const;
        void setNumber(int number);
        int getRawBits(void) const;
        void setRawBits(int const bits);
}
