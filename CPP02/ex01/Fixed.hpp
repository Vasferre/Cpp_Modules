#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using std::cout;
using std::endl;

class Fixed{
    private:
        int num;
        static const int = 8;
    public:
    Fixed(void);
    Fixed(const Fixed &copy);
    Fixed(const int value);
    Fixed(const float value);

    Fixed(void);

    Fixed & operator = (const Fixed &assign);

    int getRawBits(void) const;
    void setRawBits(int const bits);

    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream &operator<<(std::ostream& os, const Fixed& fp);

#endif