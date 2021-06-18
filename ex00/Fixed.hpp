/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 22:15:24 by tayamamo          #+#    #+#             */
/*   Updated: 2021/06/19 08:10:19 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX00_FIXED_HPP_
#define EX00_FIXED_HPP_

#include <iostream>

class   Fixed {
 public:
    Fixed();
    Fixed(Fixed const& src);
    ~Fixed();
    Fixed&  operator=(Fixed const& original);

    int     getRawBits(void) const;
    void    setRawBits(int const raw);

 private:
    int                 fixed_point_val_;
    static const int    NUM_OF_FRACTIONAL_BITS_ = 8;
};

#endif  // EX00_FIXED_HPP_
