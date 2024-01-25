/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureacurat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:13:48 by psadeghi          #+#    #+#             */
/*   Updated: 2024/01/25 15:23:37 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREACURAT_HPP
#define BUREACURAT_HPP

#include <iostream>

class Bureacurat {
	private:
		const std::string _name;
		int grade;
	public:
		std::string getName();
		std::string getGrade();
		void GradeTooHighException();
		void GradeTooLowException();
};

#endif