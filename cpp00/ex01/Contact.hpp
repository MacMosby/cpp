/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 10:31:22 by mrodenbu          #+#    #+#             */
/*   Updated: 2024/10/07 10:31:24 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

class Contact
{

public:

	char const	*first_name;
	char const	*last_name;
	char const	*nickname;
	char const	*phone_number;
	char const	*darkest_secret;

	Contact(char const *first, char const *last, char const *nick, char const *num, char const *secret);
	~Contact(void);

};

#endif
