#include <iostream>

class Fixed{
    private:
        int _fpn;
        static const int _nfb = 8;

    public:
        Fixed();
        Fixed(const int num_int);
        Fixed(const float num_float);
        Fixed(const Fixed &other);
        
        Fixed &operator=(const Fixed &other);

        float toFloat(void) const;
        int toInt(void) const;
        void setRawBits(int const raw);
        int getRawBits(void) const;

        ~Fixed();
};

std::ostream &operator<<(std::ostream &out, const Fixed &right);
