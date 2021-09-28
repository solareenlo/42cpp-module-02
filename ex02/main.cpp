/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 03:42:36 by tayamamo          #+#    #+#             */
/*   Updated: 2021/09/28 19:26:57 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include <iostream>

#include "Fixed.hpp"

int main(void) {
    Fixed a;
    Fixed const b(Fixed(5.01f) * Fixed(2));
    Fixed const c(Fixed(5) + Fixed(2));
    Fixed const d(Fixed(5.1f) - Fixed(2));
    Fixed const e(Fixed(5.0f) / Fixed(2));
    Fixed const f(Fixed(5.0f) * Fixed(1.9f));

    // std::cout << a << std::endl;
    // std::cout << ++a << std::endl;
    // std::cout << a << std::endl;
    // std::cout << a++ << std::endl;
    // std::cout << a << std::endl;

    // std::cout << b << std::endl;
    // std::cout << c << std::endl;
    // std::cout << d << std::endl;
    // std::cout << e << std::endl;
    // std::cout << f << std::endl;
    // std::cout << std::endl;
    Fixed g = Fixed(3.4f);
    std::cout << g << std::endl;
    std::cout << g + g << std::endl;
    std::cout << g - g << std::endl;
    std::cout << g * g << std::endl;
    std::cout << g / g << std::endl;
    std::cout << std::endl;
    Fixed h = Fixed(4);
    std::cout << h << std::endl;
    std::cout << h + h << std::endl;
    std::cout << h - h << std::endl;
    std::cout << h * h << std::endl;
    std::cout << h / h << std::endl;

    // std::cout << Fixed::max(a, b) << std::endl;

    return 0;
}
