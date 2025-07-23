#include <iostream>

class Fixed{
    private:
        int _fpn;
        static const int _nfb = 8;

    public:

        Fixed();
        Fixed(const Fixed &other);
        Fixed &operator=(const Fixed &other);
        ~Fixed();
        void setRawBits(int const raw);
        int getRawBits(void) const;
};