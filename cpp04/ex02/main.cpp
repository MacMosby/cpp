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
	AAnimal	*animals[6];

	animals[0] = new Cat;
	animals[1] = new Cat;
	animals[2] = new Cat;
	animals[3] = new Dog;
	animals[4] = new Dog;
	animals[5] = new Dog;

	for (int i = 0; i < 6; i++)
	{
		std::cout << "I am a " << animals[i]->getType() << ": ";
		animals[i]->makeSound();
	}

	for (int i = 0; i < 6; i++)
		delete animals[i];

	Cat a;
	a.getBrain().setIdea(0, "Hello World!");
	Cat b(a);
	std::cout << "Cat a: " << a.getBrain().getIdea(0) << std::endl;
	std::cout << "Cat b: " << b.getBrain().getIdea(0) << std::endl;
	a.getBrain().setIdea(0, "Hey people!");
	std::cout << "Cat a: " << a.getBrain().getIdea(0) << std::endl;
	std::cout << "Cat b: " << b.getBrain().getIdea(0) << std::endl;

	return 0;
}
