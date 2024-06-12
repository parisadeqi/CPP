/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:42:45 by psadeghi          #+#    #+#             */
/*   Updated: 2024/06/12 14:16:25 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
	private:
		unsigned int _size;
		T*			_array;

	public:
		Array() {
			_size = 0;
			_array = new T[0];
			std::cout << "Original constructor got called." << std::endl;
		}

		Array(unsigned int i) {
			_size = i;
			_array = new T[_size];
			std::cout << "Constructor made an array with the size of " << this->_size << std::endl;
		}

		~Array() {
			if (_array)
				delete[] _array;
			std::cout << "Destructor got called." << std::endl;
		}

		Array(const Array& rhs) : _size(rhs._size), _array(new T[rhs._size]) {
				for (unsigned int i = 0; i < _size; i++) {
					_array[i] = rhs._array[i];
				}
			}


		Array<T>& operator=(Array<T> const &rhs) {
			if (this != &rhs) {
				delete[] this->_array;
			this->_size = rhs._size;
			this->_array = new T[rhs.size()];
			for (unsigned int i = 0; i < _size; i++)
				this->_array[i] = rhs._array[i];
			}

			return (*this);
		}

		T&			operator[](unsigned int i) {
			if (i >= this->_size)
				throw std::exception();
			return this->_array[i];
		}
		
		void		display(std::ostream& stream) const
		{
			unsigned int i;
			if (_size == 0)
				return;
			for (i = 0; i < _size - 1; i++)
				stream << _array[i] << " - ";
			if (i == _size - 1)
				stream << _array[i];
		}

		unsigned int size() const {
			return this->_size;
		}
};

template <typename T>
std::ostream&	operator<<(std::ostream& stream, Array<T>const& rhs)
{
	rhs.display(stream);
	return (stream);
}

#endif