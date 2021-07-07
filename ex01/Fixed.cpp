/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 22:19:27 by tayamamo          #+#    #+#             */
/*   Updated: 2021/07/08 03:53:09 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : val_(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int val) : val_(val << NUM_OF_FRACTIONAL_BITS_) {
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float val) :
    val_(roundf(val * (1 << NUM_OF_FRACTIONAL_BITS_))) {
    std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const& src) {
    std::cout << "Copy constructor called" << std::endl;
    this->operator=(src);
}

Fixed&  Fixed::operator=(Fixed const& rhs) {
    std::cout << "Assignation operator called" << std::endl;
    if (this != &rhs)
        this->val_ = rhs.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const {
    return (this->val_);
}

void    Fixed::setRawBits(int const raw) {
    this->val_ = raw;
}

float   Fixed::toFloat(void) const {
    return (static_cast<float>(this->val_) / (1 << NUM_OF_FRACTIONAL_BITS_));
}

int Fixed::toInt(void) const {
    return (this->val_ >> NUM_OF_FRACTIONAL_BITS_);
}

std::ostream&   operator << (std::ostream& ostream, Fixed const& fixed) {
    return (ostream << fixed.toFloat());
}
