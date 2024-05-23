/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
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
# include "Bureacurat.hpp"

class Bureacurat;

class Form {
	private:
		const std::string _name;
		bool _signedForm;
		const int _gradeToSign;
		const int _gradeToExecute;

	public:
		Form(std::string name, int gradeToSign);
		~Form();
		Form(const Form& copy);
		Form& operator=(const Form& var);
		int getGradeToSign() const;
		int getGradeToExecute() const;
		bool getSignedForm() const;
		std::string getName() const;

		virtual void beSigned(const Bureacurat& var) = 0;

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