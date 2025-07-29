/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 21:31:46 by lraggio           #+#    #+#             */
/*   Updated: 2025/05/19 19:16:27 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _fpn(0) {
	//std::cout << "Default constructor called" << std::endl;
};

Fixed::~Fixed(){
	//std::cout << "Destructor called" << std::endl;
};

Fixed::Fixed(const Fixed &other) {
	//std::cout << "Copy constructor called" << std::endl;
	*this = other;
};

Fixed& Fixed::operator=(const Fixed &other) {
	//std::cout << "Assignment operator called" << std::endl;
	if (this != &other) {
        this->_fpn = other.getRawBits();
    }
    return (*this);
};

int	Fixed::getRawBits(void) const {
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_fpn); //returns the raw value of the fixed-point value
};

void	Fixed::setRawBits(int const raw) {
	this->_fpn = raw;
}

Fixed::Fixed(const int n) {
	//std::cout << "Int constructor called" << std::endl;
	this->_fpn = n << this->_nfb;
}

Fixed::Fixed(const float n) {
	//std::cout << "Float constructor called" << std::endl;
	this->_fpn = roundf(n * (1 << this->_nfb));
}

float	Fixed::toFloat(void) const {
	return ((float)this->_fpn / (1 << this->_nfb));
}

int	Fixed::toInt(void) const {
	return (this->_fpn >> this->_nfb);
}

//Essa função me permite utilizar std::cout << fixed;
std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
	out << fixed.toFloat();
	return (out);
}

bool	Fixed::operator>(const Fixed &other) const {
	return (this->_fpn > other._fpn);
}

bool	Fixed::operator<(const Fixed &other) const {
	return (this->_fpn < other._fpn);
}

bool	Fixed::operator>=(const Fixed &other) const {
	return (this->_fpn >= other._fpn);
}

bool	Fixed::operator<=(const Fixed &other) const {
	return (this->_fpn <= other._fpn);
}

bool	Fixed::operator==(const Fixed &other) const {
	return (this->_fpn == other._fpn);
}

bool	Fixed::operator!=(const Fixed &other) const {
	return (this->_fpn != other._fpn);
}

Fixed Fixed::operator+(const Fixed &other) const {
	Fixed result;

	result.setRawBits(this->_fpn + other._fpn);
	return (result);
}

Fixed Fixed::operator-(const Fixed &other) const {
	Fixed result;

	result.setRawBits(this->_fpn - other._fpn);
	return (result);
}

Fixed Fixed::operator*(const Fixed &other) const {
	Fixed result;
	long	temp_result;

	temp_result = (long)this->_fpn * (long)other._fpn;
	result.setRawBits((int)(temp_result >> _nfb));
	return (result);
}

Fixed Fixed::operator/(const Fixed &other) const {
	Fixed result;
	long	temp_result;

	if (other._fpn == 0) {
		std::cout << "error: division by zero in 'Fixed::operator/'" << std::endl;
		return (result); //retorna o default 0.0f.
	}

	temp_result = (((long)this->_fpn << this->_nfb) / (long)other._fpn);
	result.setRawBits((int)(temp_result));
	return (result);
}

Fixed& Fixed::operator++() {
	this->_fpn += 1;
	return (*this);
}

Fixed& Fixed::operator--() {
	this->_fpn -= 1;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed result;

	result = *this;
	this->_fpn += 1;
	return (result);
}

Fixed Fixed::operator--(int) {
	Fixed result;

	result = *this;
	this->_fpn -= 1;
	return (result);
}

Fixed& Fixed::min(Fixed &n1, Fixed &n2) {
	if (n1 < n2) {
		return (n1);
	}
	return (n2);
}

const Fixed& Fixed::min(const Fixed &n1, const Fixed &n2) {
	if (n1 < n2)
		return (n1);
	return (n2);
}

Fixed& Fixed::max(Fixed &n1, Fixed &n2) {
	if (n1 > n2) {
		return (n1);
	}
	return (n2);
}

const Fixed& Fixed::max(const Fixed &n1, const Fixed &n2) {
	if (n1 > n2)
		return (n1);
	return (n2);
}