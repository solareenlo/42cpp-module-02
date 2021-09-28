/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 06:10:57 by tayamamo          #+#    #+#             */
/*   Updated: 2021/09/29 07:10:09 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Point.hpp"

#define Vec2D Point

Vec2D subVec(Point const& a, Point const& b) {
    return Vec2D((a.getX() - b.getX()).toFloat(),
                 (a.getY() - b.getY()).toFloat());
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    Vec2D ab = subVec(b, a);
    Vec2D bp = subVec(point, b);

    Vec2D bc = subVec(c, b);
    Vec2D cp = subVec(point, c);

    Vec2D ca = subVec(a, c);
    Vec2D ap = subVec(point, a);

    Fixed cross1 = ab.getX() * bp.getY() - ab.getY() * bp.getX();
    Fixed cross2 = bc.getX() * cp.getY() - bc.getY() * cp.getX();
    Fixed cross3 = ca.getX() * ap.getY() - ca.getY() * ap.getX();

    if (cross1 > Fixed(0) && cross2 > Fixed(0) && cross3 > Fixed(0)) {
        return true;
    }
    if (cross1 < Fixed(0) && cross2 < Fixed(0) && cross3 < Fixed(0)) {
        return true;
    }
    return false;
}
