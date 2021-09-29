/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 04:23:43 by tayamamo          #+#    #+#             */
/*   Updated: 2021/09/29 12:01:53 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {}
Point::~Point() {}
Point::Point(Point const& src) : x(src.x), y(src.y) {}
Point::Point(float const x, float const y) : x(x), y(y) {}

Point& Point::operator=(Point const& rhs) {
    if (this != &rhs) {
        const_cast<Fixed&>(x) = rhs.x;
        const_cast<Fixed&>(y) = rhs.y;
    }
    return *this;
}

Fixed Point::getX() const { return x; }
Fixed Point::getY() const { return y; }
