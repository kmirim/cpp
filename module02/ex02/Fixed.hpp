#include <iostream>

class Fixed{
    private:
        int _fpn;
        static const int _nfb = 8;

    public:
        
        Fixed(const int num_int);
        Fixed(const float num_float);

        Fixed();
        Fixed(const Fixed &other);
        Fixed &operator=(const Fixed &other);
        ~Fixed();
        
        void setRawBits(int const raw);
        int getRawBits(void) const;
        float toFloat(void) const;
        int toInt(void) const;
    
        bool operator>(const Fixed &other) const;
        bool operator<(const Fixed &other) const;
        bool operator>=(const Fixed &other) const;
        bool operator<=(const Fixed &other) const;
        bool operator!=(const Fixed &other) const;

        Fixed operator+(const Fixed &other) const;
        Fixed operator-(const Fixed &other) const;
        Fixed operator*(const Fixed &other) const;
        Fixed operator/(const Fixed &other) const;

        Fixed &operator++();
        Fixed operator++(int);
        Fixed &operator--();
        Fixed operator--(int);

        static Fixed &min(Fixed &Fixed1, Fixed &Fixed2);
        static const Fixed &min(const Fixed &Fixed1, const Fixed &Fixed2);
        static Fixed &max(Fixed &Fixed1, Fixed &Fixed2);
        static const Fixed &max(const Fixed &Fixed1, const Fixed &Fixed2);
};

std::ostream &operator<<(std::ostream &out, const Fixed &right);
