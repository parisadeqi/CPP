/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureacurat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:13:48 by psadeghi          #+#    #+#             */
/*   Updated: 2024/02/27 14:26:10 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREACURAT_HPP
#define BUREACURAT_HPP

# include <iostream>
# include <exception>
# include <string>
# include "Form.hpp"

class Form;

class Bureacurat {
	private:
		const std::string _name;
		int _grade;
	public:
		Bureacurat(std::string name, int grade);
		~Bureacurat();
		Bureacurat(const Bureacurat& copy);
		Bureacurat& operator=(const Bureacurat& var);
		std::string getName() const;
		int getGrade() const;
		void increamentGrade();
		void decrementGrade();
		void signForm(Form& var);
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("The grade can not be higher than 1!");
				}
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("The grade can not be lower than 150!");
				}
		};
};

std::ostream& operator<<(std::ostream& o, const Bureacurat& var);

#endif