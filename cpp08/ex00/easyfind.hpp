/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 17:41:38 by parisasadeq       #+#    #+#             */
/*   Updated: 2024/06/17 12:29:01 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iostream>
# include <list>
# include <iterator>
# include <vector>
# include <array>

template<typename T>
typename T::iterator easyfind(T & container, int t) {
	typename T::iterator it;
	
	it = std::find(container.begin(), container.end(), t);
	if (it == container.end())
		throw std::exception();
	return it;
}


#endif