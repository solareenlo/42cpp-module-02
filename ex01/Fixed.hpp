/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 22:15:24 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/27 04:27:56 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX01_FIXED_HPP_
#define EX01_FIXED_HPP_

#include <iostream>
#include <cmath>

class   Fixed {
 private:
    int                 val_;
    static const int    NUM_OF_FRACTIONAL_BITS_ = 8;

 public:
    Fixed(void);
    explicit Fixed(const int val);
    explicit Fixed(const float val);

    ~Fixed(void);

    Fixed(const Fixed& src);

    Fixed& operator = (const Fixed& original);

    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;
};

std::ostream& operator << (std::ostream& ostream, const Fixed& fixed);

#endif  // EX01_FIXED_HPP_
