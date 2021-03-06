/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 12:57:29 by mbrija            #+#    #+#             */
/*   Updated: 2022/02/02 18:03:17 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Bureaucrat_HPP_
#define _Bureaucrat_HPP_

#include <iostream>
#include <string>
#include <stdexcept>
#include <fstream>
#include "Form.hpp"

class Form;
class Bureaucrat
{
private:
	const std::string name;
	int grade;
public:
	Bureaucrat(/* args */);
	Bureaucrat(const std::string Bname, int Bgrade);
	Bureaucrat(const Bureaucrat &p);
	Bureaucrat &operator= (const Bureaucrat &p);
	~Bureaucrat();

	const std::string &getName() const;
	int getGrade() const;
    void signForm(Form &form);
    void executeForm(Form const & form);

	 class GradeTooHighException : public std::exception

    {
        const char *what(void) const throw()
        {
            return "Grade is too High";
        }
    };

    class GradeTooLowException : public std::exception
    {
        const char *what(void) const throw()
        {
            return "Grade is too Low";
        }
    };

	void incrementGrade();
	void decrementGrade();
};

std::ostream &operator<< (std::ostream &os ,const Bureaucrat &p);

#endif
