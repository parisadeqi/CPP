/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 13:18:12 by psadeghi          #+#    #+#             */
/*   Updated: 2024/06/04 14:16:44 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FORM_HPP
#define FORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		const std::string _name;
		bool _signedForm;
		const int _gradeToSign;
		const int _gradeToExecute;

	public:
		Form(std::string name, int gradeToSign, int gradeToExecute);
		~Form();
		Form(const Form& copy);
		Form& operator=(const Form& var);
		void beSigned(const Bureaucrat& var);
		int getGradeToSign() const;
		int getGradeToExecute() const;
		bool getSignedForm() const;
		std::string getName() const;

		class Exception : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return ("Exception!");
				}
		};
		class GradeTooHighException : public std::exception {
			public :
				virtual const char* what() const throw() {
					return ("The grade is too high!");
				}
		};
		class GradeTooLowException : public std::exception {
			public :
				virtual const char* what() const throw() {
					return ("The grade is too low!");
				}
		};
};

std::ostream& operator<<(std::ostream& o, const Form& var);

#endif