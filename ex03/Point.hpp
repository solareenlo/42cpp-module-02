/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solareenlo <tayamamo@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 03:22:29 by solareenlo        #+#    #+#             */
/*   Updated: 2021/09/29 05:38:21 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */
#ifndef EX03_POINT_HPP_
#define EX03_POINT_HPP_

#include "Fixed.hpp"

class Point {
 public:
    Point();
    ~Point();
    Point(Point const& src);
    Point(float const x, float const y);
    Point& operator=(Point const& rhs);

    Fixed getX() const;
    Fixed getY() const;

 private:
    Fixed const x;
    Fixed const y;
};

#endif  // EX03_POINT_HPP_
