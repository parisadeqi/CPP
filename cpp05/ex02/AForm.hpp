/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 13:18:12 by psadeghi          #+#    #+#             */
/*   Updated: 2024/05/23 17:24:11 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FORM_HPP
#define FORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	private:
		const std::string _name;
		bool _signedForm;
		const int _gradeToSign;
		const int _gradeToExecute;

	public:
		AForm(std::string name, int gradeToSign, int gradeToExecute);
		~AForm();
		AForm(const AForm& copy);
		AForm& operator=(const AForm& var);
		int getGradeToSign() const;
		int getGradeToExecute() const;
		bool getSignedForm() const;
		std::string getName() const;

		virtual void beSigned(const Bureaucrat& var);
		virtual void execute(Bureaucrat const & executor) const = 0;
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
		class UnsignedFormException : public std::exception {
			public :
				virtual const char* what() const throw() {
					return ("The form is not signed!");
				}
		};
};

std::ostream& operator<<(std::ostream& o, const AForm& var);

#endif