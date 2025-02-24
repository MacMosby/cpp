/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 16:59:44 by mrodenbu          #+#    #+#             */
/*   Updated: 2025/02/07 16:59:45 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete i;
	delete j;

	const WrongAnimal* new_meta = new WrongAnimal();
	const Animal* d = new Dog();
	const WrongAnimal* c = new WrongCat();

	std::cout << c->getType() << " " << std::endl;
	std::cout << d->getType() << " " << std::endl;
	c->makeSound(); //will output the cat sound!
	d->makeSound();
	new_meta->makeSound();

	delete new_meta;
	delete c;
	delete d;

	return 0;
}
