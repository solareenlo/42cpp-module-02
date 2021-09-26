/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 22:15:24 by tayamamo          #+#    #+#             */
/*   Updated: 2021/09/26 13:27:27 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX01_FIXED_HPP_
#define EX01_FIXED_HPP_

#include <cmath>
#include <iostream>

class Fixed {
 public:
    Fixed();
    ~Fixed();
    Fixed(Fixed const& src);
    Fixed& operator=(Fixed const& rhs);

    explicit Fixed(const int val);
    explicit Fixed(const float val);

    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;

 private:
    int val_;
    static const int NUM_OF_FRACTIONAL_BITS_ = 8;
};

std::ostream& operator<<(std::ostream& os, Fixed const& fixed);

#endif  // EX01_FIXED_HPP_
