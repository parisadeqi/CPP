/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 11:57:05 by psadeghi          #+#    #+#             */
/*   Updated: 2024/06/04 12:33:57 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <exception>
# include <string>
# include "AForm.hpp"
# include "Bureaucrat.hpp"

class AForm;
class Bureaucrat;

class RobotomyRequestForm : public AForm {
	private:
		std::string _target;
	public:
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const & copy);
		RobotomyRequestForm & operator=(RobotomyRequestForm const & copy);
		
		std::string	getTarget( void ) const;
		
		void execute(Bureaucrat const & executor) const;

		class RobotomyFailiurException : public std::exception {
			public :
				virtual const char* what() const throw() {
					return ("Robotomy failed!");
				}
		};
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& var);

#endif