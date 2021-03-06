/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 23:16:59 by mbrija            #+#    #+#             */
/*   Updated: 2021/12/07 14:21:38 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default Const called" << std::endl;
    
    this->value = 0;
}


Fixed::Fixed(const Fixed &p)
{
     std::cout << "Copy Const Called" << std::endl;
    *this = p;
}

Fixed::Fixed(const int num)
{
    std::cout << "INT Const Called" << std::endl;
    this->value = num * (1 << Fixed::fractionalBit);
}

Fixed::Fixed(const float num)
{
    std::cout << "float Const Called" << std::endl;
    this->value = roundf(num * (1 << Fixed::fractionalBit));
}

float Fixed::toFloat( void ) const
{
     return (float)value / (1 << Fixed::fractionalBit);
}

int Fixed::toInt( void ) const
{
    return value / (1 << Fixed::fractionalBit);
}

Fixed::~Fixed()
{
     std::cout << "Destructor" << std::endl; 
}

void Fixed::operator=(const Fixed &p)
{ 
    std::cout << "Assignation Op Called" << std::endl;
    this->value = p.getRawBits();
}

int Fixed::getRawBits() const
{
    return this->value;
}

void Fixed::setRawBits(int const raw)
{
     std::cout << "Set Raw Bits called" << std::endl;
    this->value = raw;
}

std::ostream& operator<<(std::ostream &os, const Fixed& floatingPoint)
{
    os << floatingPoint.toFloat();
    return os;
}