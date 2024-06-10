/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: parisasadeqi <parisasadeqi@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/10 17:49:38 by parisasadeq   #+#    #+#                 */
/*   Updated: 2024/06/10 18:01:18 by parisasadeq   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{

	Data *data = new Data;
	data->name = "Paris";

	uintptr_t raw = Serializer::serialize(data);
	Data *serialized = Serializer::deserialize(raw);

	std::cout << serialized->name << std::endl;

	delete data;
	return (0);
}