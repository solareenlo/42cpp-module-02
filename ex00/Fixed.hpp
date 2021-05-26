/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 22:15:24 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/27 00:01:18 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX00_FIXED_HPP_
#define EX00_FIXED_HPP_

class   Fixed {
 private:
    int                 fixed_point_val_;
    static const int    NUM_OF_FRACTIONAL_BITS_ = 8;

 public:
    Fixed(void);

    ~Fixed(void);

    Fixed(const Fixed& src);

    Fixed& operator = (const Fixed& original);

    int     getRawBits(void) const;
    void    setRawBits(int const raw);
};

#endif  // EX00_FIXED_HPP_
