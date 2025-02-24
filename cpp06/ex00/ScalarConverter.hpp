/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 19:46:41 by mrodenbu          #+#    #+#             */
/*   Updated: 2025/02/21 19:46:44 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_H
# define SCALAR_CONVERTER_H

# include <iostream>
# include <string>
# include <cstdlib>

class ScalarConverter
{

	public:



		static void		convert(std::string s);

	private:

		ScalarConverter();
		ScalarConverter(ScalarConverter const &ref);
		~ScalarConverter();

		ScalarConverter	&operator=(ScalarConverter const &ref);

};



#endif
