/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:13:48 by psadeghi          #+#    #+#             */
/*   Updated: 2024/06/04 12:21:53 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREACURAT_HPP
#define BUREACURAT_HPP

# include <iostream>
# include <exception>
# include <string>
# include "AForm.hpp"

class AForm;

class Bureaucrat {
	private:
		const std::string _name;
		int _grade;
	public:
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat& copy);
		Bureaucrat& operator=(const Bureaucrat& var);
		std::string getName() const;
		int getGrade() const;
		void increamentGrade();
		void decrementGrade();
		void signForm(AForm& var);
		void executeForm(AForm const & AForm);
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

std::ostream& operator<<(std::ostream& o, const Bureaucrat& var);

#endif