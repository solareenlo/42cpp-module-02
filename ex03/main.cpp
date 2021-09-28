/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 03:42:36 by tayamamo          #+#    #+#             */
/*   Updated: 2021/09/29 08:02:38 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include <iostream>

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);
void print(std::string point, Point p);

int main(void) {
    Point a(0.0f, 0.0f), b(2.0f, 0.0f), c(1.0f, 1.414f);
    Point p1(1.0f, 1.0f), p2(0.0f, 0.5f), p3(-0.1f, 0.0f), p4(-0.1f, -0.1f);

    print("a", a);
    print("b", b);
    print("c", c);
    std::cout << bsp(a, b, c, p1) << std::endl;
    std::cout << bsp(b, c, a, p1) << std::endl;
    std::cout << bsp(a, b, c, p2) << std::endl;
    std::cout << bsp(a, b, c, p3) << std::endl;
    std::cout << bsp(a, b, c, p4) << std::endl;
    return 0;
}

void print(std::string point, Point p) {
    std::cout << point << ": (" << p.getX() << ", " << p.getY() << ")"
              << std::endl;
}
