/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 22:19:27 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/27 01:28:04 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include <iomanip>
#include "Fixed.hpp"

Fixed::Fixed(void) {
    std::cout << "Default constructor called" << std::endl;
    this->val_ = 0;
}

Fixed::Fixed(const int val) {
    this->val_ = val << NUM_OF_FRACTIONAL_BITS_;
}

Fixed::Fixed(const float val) {
    this->val_ = roundf(val * (1 << NUM_OF_FRACTIONAL_BITS_));
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed& Fixed::operator = (const Fixed& original) {
    std::cout << "Assignation operator called" << std::endl;
    if (this != &original)
        this->val_ = original.getRawBits();
    return (*this);
}

std::ostream& operator << (std::ostream& ostream, const Fixed& fixed) {
    return (ostream << fixed.toFloat());
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (this->val_);
}

void Fixed::setRawBits(int const raw) {
    this->val_ = raw;
}

float   Fixed::toFloat(void) const {
    return (static_cast<float>(this->val_) / (1 << NUM_OF_FRACTIONAL_BITS_));
}

int Fixed::toInt(void) const {
    return (this->val_ >> NUM_OF_FRACTIONAL_BITS_);
}
