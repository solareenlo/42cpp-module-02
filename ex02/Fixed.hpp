/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 22:15:24 by tayamamo          #+#    #+#             */
/*   Updated: 2021/09/27 12:10:55 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX02_FIXED_HPP_
#define EX02_FIXED_HPP_

#include <cmath>
#include <iostream>

class Fixed {
 public:
    Fixed();
    ~Fixed();
    Fixed(Fixed const& src);
    explicit Fixed(const int val);
    explicit Fixed(const float val);

    Fixed& operator=(Fixed const& rhs);
    bool operator>(Fixed const& rhs);
    bool operator<(Fixed const& rhs);
    bool operator>=(Fixed const& rhs);
    bool operator<=(Fixed const& rhs);
    bool operator==(Fixed const& rhs);
    bool operator!=(Fixed const& rhs);
    Fixed& operator++();
    Fixed& operator--();
    const Fixed operator++(int);
    const Fixed operator--(int);

    int getRawBits(void) const;
    void setRawBits(int const raw);
    int getNumOfFractionalBits(void) const;
    float toFloat(void) const;
    int toInt(void) const;

 private:
    int val_;
    static const int NUM_OF_FRACTIONAL_BITS_ = 8;
};

std::ostream& operator<<(std::ostream& os, Fixed const& fixed);
const Fixed operator+(Fixed const& lhs, Fixed const& rhs);
const Fixed operator-(Fixed const& lhs, Fixed const& rhs);
const Fixed operator*(Fixed const& lhs, Fixed const& rhs);
const Fixed operator/(Fixed const& lhs, Fixed const& rhs);

#endif  // EX02_FIXED_HPP_
