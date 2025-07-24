#include <iostream>

class Fixed{
    private:
        int _fpn;
        static const int _nfb = 8;

    public:
        
        Fixed(const int num_int);
        Fixed(const float num_float);
        
        float toFloat(void) const;
        int toInt(void) const;

        Fixed();
        Fixed(const Fixed &other);
        Fixed &operator=(const Fixed &other);
        ~Fixed();
        
        void setRawBits(int const raw);
        int getRawBits(void) const;
        float toFloat(void) const;
        int toInt(void) const;
        
};