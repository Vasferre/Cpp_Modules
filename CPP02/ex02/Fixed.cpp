#include "Fixed.hpp"

Fixed::Fixed(void) {
	this->number = 0;
}

Fixed::Fixed(const Fixed &copy) {
	*this = copy;
}

Fixed::Fixed(const int value) {
	this->number = value * (1 << Fixed::bits);
}

Fixed::Fixed(const float value) {
	this->number = roundf(value * (1 << Fixed::bits));
}

Fixed::~Fixed(void) {}

Fixed &Fixed::operator=(const Fixed &assign) {
	this->number = assign.getRawBits();
	return *this;
}

bool Fixed::operator>(const Fixed &assign) const {
	return this->number > assign.getRawBits();
}

bool Fixed::operator<(const Fixed &assign) const {
	return this->number < assign.getRawBits();
}

bool Fixed::operator>=(const Fixed &assign) const {
	return this->number >= assign.getRawBits();
}

bool Fixed::operator<=(const Fixed &assign) const {
	return this->number <= assign.getRawBits();
}

bool Fixed::operator==(const Fixed &assign) const {
	return this->number == assign.getRawBits();
}

bool Fixed::operator!=(const Fixed &assign) const {
	return this->number != assign.getRawBits();
}

Fixed Fixed::operator+(const Fixed &assign) {
	return Fixed(this->toFloat() + assign.toFloat());
}

Fixed Fixed::operator-(const Fixed &assign) {
	return Fixed(this->toFloat() - assign.toFloat());
}

Fixed Fixed::operator*(const Fixed &assign) {
	return Fixed(this->toFloat() * assign.toFloat());
}

Fixed Fixed::operator/(const Fixed &assign) {
	return Fixed(this->toFloat() / assign.toFloat());
}

Fixed &Fixed::operator++(void) {
	this->number += 1;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed temp(this->number * toFloat());
	this->number += 1;
	return (temp); 
}	 

Fixed &Fixed::operator--(void) {
	this->number -= 1;
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed temp(this->number * toFloat());
	this->number -= 1;
	return (temp);
}

int Fixed::getRawBits(void) const {
	return this->number;
}

void Fixed::setRawBits(int const bits) {
	this->number = bits;
}

int Fixed::toInt(void) const {
	return this->number >> Fixed::bits;
}

float Fixed::toFloat(void) const {
	return (float)this->number / (float)(1 << Fixed::bits);
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
	return a.getRawBits() < b.getRawBits() ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
	return a.getRawBits() < b.getRawBits() ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
	return a.getRawBits() > b.getRawBits() ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
	return a.getRawBits() > b.getRawBits() ? a : b;
}

std::ostream &operator<<(std::ostream& os, const Fixed& fp) {
    os << fp.toFloat();
    return os;
}