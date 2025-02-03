/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:08:58 by mrodenbu          #+#    #+#             */
/*   Updated: 2025/01/14 16:09:00 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "cmath"

const int	Fixed::_fract_bits = 8;

// default constructor
Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

// constructor with integer input
Fixed::Fixed(int const number) : _value(number << Fixed::_fract_bits)
{
	std::cout << "Int constructor called" << std::endl;
}

// constructor with float input
Fixed::Fixed(float const number) : _value((int)roundf(number * 256))
{
	std::cout << "Float constructor called" << std::endl;
}

// copy constructor
Fixed::Fixed(Fixed const &ref)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = ref;
}

// destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

// copy assignment operator
Fixed	&Fixed::operator=(Fixed const &ref)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = ref._value;
	return (*this);
}

Fixed	Fixed::operator+(Fixed const &ref) const
{
	return Fixed(this->toFloat() + ref.toFloat());
}

Fixed	&Fixed::operator++()
{
	++this->_value;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp = *this;
	this->_value++;
	return tmp;
}

Fixed	Fixed::operator-(Fixed const &ref) const
{
	return Fixed(this->toFloat() - ref.toFloat());
}

Fixed	&Fixed::operator--()
{
	--this->_value;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp = *this;
	this->_value--;
	return tmp;
}

Fixed	Fixed::operator*(Fixed const &ref) const
{
	return Fixed(this->toFloat() * ref.toFloat());
}

Fixed	Fixed::operator/(Fixed const &ref) const
{
	return Fixed(this->toFloat() / ref.toFloat());
}

bool	Fixed::operator>(Fixed const &ref) const
{
	if (this->_value > ref.getRawBits())
		return true;
	else
		return false;
}

bool	Fixed::operator<(Fixed const &ref) const
{
	if (this->_value < ref.getRawBits())
		return true;
	else
		return false;
}

bool	Fixed::operator>=(Fixed const &ref) const
{
	if (this->_value >= ref.getRawBits())
		return true;
	else
		return false;
}

bool	Fixed::operator<=(Fixed const &ref) const
{
	if (this->_value <= ref.getRawBits())
		return true;
	else
		return false;
}

bool	Fixed::operator==(Fixed const &ref) const
{
	if (this->_value == ref.getRawBits())
		return true;
	else
		return false;
}

bool	Fixed::operator!=(Fixed const &ref) const
{
	if (this->_value != ref.getRawBits())
		return true;
	else
		return false;
}

Fixed &Fixed::min(Fixed &left, Fixed &right)
{
	if (left < right)
		return left;
	else
		return right;
}

Fixed const &Fixed::min(Fixed const &left, Fixed const &right)
{
	if (left < right)
		return left;
	else
		return right;
}

Fixed &Fixed::max(Fixed &left, Fixed &right)
{
	if (left >= right)
		return left;
	else
		return right;
}

Fixed const &Fixed::max(Fixed const &left, Fixed const &right)
{
	if (left >= right)
		return left;
	else
		return right;
}

int		Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float	Fixed::toFloat( void ) const
{
	float	res;

	res = (float)(this->_value >> 8);
	res += (float)(this->_value % 256) / 256;
	return (res);
}

int		Fixed::toInt( void ) const
{
	return (this->_value >> Fixed::_fract_bits);
}

std::ostream	&operator<<(std::ostream &out, Fixed const &input)
{
	out << input.toFloat();
	return (out);
}

