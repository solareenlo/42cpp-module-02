/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 22:19:27 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/27 00:06:44 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
    std::cout << "Default constructor called" << std::endl;
    this->fixed_point_val_ = 0;
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
        this->fixed_point_val_ = original.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixed_point_val_);
}

void Fixed::setRawBits(int const raw) {
    this->fixed_point_val_ = raw;
}
