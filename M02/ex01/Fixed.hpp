/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 23:16:56 by mbrija            #+#    #+#             */
/*   Updated: 2021/11/24 14:40:29 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

class Fixed
{
private:
    int value;
    static const int fractionalBit = 8;
public:
    Fixed();
    Fixed(const Fixed &p);
    Fixed(const int num);
    Fixed(const float num);
    ~Fixed();
    float toFloat( void ) const;
    int toInt( void ) const;
    void operator= (const Fixed &p);
    int getRawBits() const;
    void setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream &os, const Fixed& floatingPoint);

#endif