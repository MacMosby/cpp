/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 10:31:29 by mrodenbu          #+#    #+#             */
/*   Updated: 2024/10/07 10:31:30 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

class PhoneBook
{

	public:

		PhoneBook(void);
		~PhoneBook(void);

		void	add(void);
		void	search(void) const;

	private:

		Contact	contacts[8];

		void	place_in_phonebook(Contact entry);
		void	replace_oldest_entry(Contact new_entry);
		void	display_all_entries(void) const;
		void	display_contact_line(Contact entry, int index) const;
		void	display_contact_detail(std::string contact_detail) const;
		void	display_contact(int index) const;
};

#endif
