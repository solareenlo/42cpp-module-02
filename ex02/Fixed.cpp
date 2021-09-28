/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 22:19:27 by tayamamo          #+#    #+#             */
/*   Updated: 2021/09/28 20:42:46 by solareenlo       ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : val_(0) {
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int val) : val_(val << NUM_OF_FRACTIONAL_BITS_) {
    // std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float val)
    : val_(roundf(val * (1 << NUM_OF_FRACTIONAL_BITS_))) {
    // std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed() { /*std::cout << "Destructor called" << std::endl;*/
}

Fixed::Fixed(Fixed const& src) {
    // std::cout << "Copy constructor called" << std::endl;
    this->operator=(src);
}

Fixed& Fixed::operator=(Fixed const& rhs) {
    // std::cout << "Assignation operator called" << std::endl;
    if (this != &rhs) val_ = rhs.getRawBits();
    return *this;
}

bool Fixed::operator>(Fixed const& rhs) const { return val_ > rhs.val_; }
bool Fixed::operator<(Fixed const& rhs) const { return val_ < rhs.val_; }
bool Fixed::operator>=(Fixed const& rhs) const { return !(val_ < rhs.val_); }
bool Fixed::operator<=(Fixed const& rhs) const { return !(val_ > rhs.val_); }
bool Fixed::operator==(Fixed const& rhs) const { return val_ == rhs.val_; }
bool Fixed::operator!=(Fixed const& rhs) const { return !(*this == rhs); }

Fixed& Fixed::operator++() {
    ++val_;
    return *this;
}

Fixed& Fixed::operator--() {
    --val_;
    return *this;
}

const Fixed Fixed::operator++(int) {
    Fixed res = *this;
    val_++;
    return res;
}

const Fixed Fixed::operator--(int) {
    Fixed res = *this;
    val_--;
    return res;
}

int Fixed::getRawBits(void) const { return val_; }
void Fixed::setRawBits(int const raw) { val_ = raw; }
int Fixed::getNumOfFractionalBits(void) const {
    return NUM_OF_FRACTIONAL_BITS_;
}

float Fixed::toFloat(void) const {
    return static_cast<float>(val_) / (1 << NUM_OF_FRACTIONAL_BITS_);
}

int Fixed::toInt(void) const { return val_ >> NUM_OF_FRACTIONAL_BITS_; }

Fixed& Fixed::min(Fixed& a, Fixed& b) { return a <= b ? a : b; }
Fixed& Fixed::max(Fixed& a, Fixed& b) { return a >= b ? a : b; }

Fixed const& Fixed::min(Fixed const& a, Fixed const& b) {
    return a <= b ? a : b;
}

Fixed const& Fixed::max(Fixed const& a, Fixed const& b) {
    return a >= b ? a : b;
}

const Fixed operator+(Fixed const& lhs, Fixed const& rhs) {
    return Fixed(lhs.toFloat() + rhs.toFloat());
}

const Fixed operator-(Fixed const& lhs, Fixed const& rhs) {
    return Fixed(lhs.toFloat() - rhs.toFloat());
}

const Fixed operator*(Fixed const& lhs, Fixed const& rhs) {
    return Fixed(lhs.toFloat() * rhs.toFloat());
}

const Fixed operator/(Fixed const& lhs, Fixed const& rhs) {
    return Fixed(lhs.toFloat() / rhs.toFloat());
}

std::ostream& operator<<(std::ostream& os, Fixed const& fixed) {
    return os << fixed.toFloat();
}
