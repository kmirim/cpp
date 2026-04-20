//importante de entender  -> quando eu retorno um novo vetor, e quando eu retorno o mesmo vetor alterado

#ifndef VECT2_TENTATIVA1_HPP
# define VECT2_TENTATIVA1_HPP

class vect2 {
    private:  
        int _data[2]; //arr de uas posicoes para assegurar que o dados fiquem privados(x, y);
    
    public: 
        
        vect2();
        vect2(int x, int y);
        const vect2(const vect2 &other);
        ~vect2();
        
        vect2 &operator=(const vect2 &other);
        vect2 &operator+=(const vect2 &other);
        vect2 &operator-=(const vect2 &other);
        vect2 &operator*=(int scalar);
        
        vect2 &operator++();
        vect2 &operator--();
        vect2 operator++(int);
        vect2 operator--(int);
        vect2 operator-() const;
        
        vect2 operator[](int index) const; 
        const int &operator[](int index) const;
        
    };
    
    bool operator==(const vect2 &matriz1, const vect2 &matriz2);
    bool operator!=(const vect2 &matriz1, const vect2 &matriz2);
    
    vect2 operator+(const vect2 &indexD, const vect2 &indexE);
    vect2 operator-(const vect2 &indexD, const vect2 &indexE);
    vect2 operator*(int scalar, const vect2 &other); // num * vect2
    vect2 operator*(const vect2 &other, int scalar); // vect2 * num 
    
    std::ostream &operator<<(std::ostream &os, const vect2 &vetor);
#endif