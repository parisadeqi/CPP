/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:39:25 by psadeghi          #+#    #+#             */
/*   Updated: 2024/01/23 14:40:21 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{

	std::cout << "\n          Animal          \n" << std::endl;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "j type = " << j->getType() << std::endl;
	std::cout << "i type = " << i->getType() << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete	meta;
	delete	j;
	delete	i;

	std::cout << "\n          Wrong Animal          \n" << std::endl;

	const WrongAnimal* wrong = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << "wrong type = " << wrong->getType() << std::endl;
	std::cout << "wrongCat type = " << wrongCat->getType() << std::endl;

	wrong->makeSound();
	wrongCat->makeSound();

	delete wrong;
	delete wrongCat;

	return 0;
}