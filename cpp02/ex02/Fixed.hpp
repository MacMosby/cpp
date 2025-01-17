/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:09:02 by mrodenbu          #+#    #+#             */
/*   Updated: 2025/01/14 16:09:04 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{

	public:

		Fixed(void);	// default constructor
		Fixed(int const number); // int constructor
		Fixed(float const number); // float constructor
		Fixed(Fixed const &ref);	// copy constructor
		~Fixed();	// destructor

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat( void ) const;
		int		toInt( void ) const;

		Fixed	&operator=(Fixed const &ref);	// copy assignment operator

	private:

		int					_value;

		static const int	_fract_bits;

};

std::ostream	&operator<<(std::ostream &o, Fixed const &input);

#endif
