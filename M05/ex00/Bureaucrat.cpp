/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 12:57:25 by mbrija            #+#    #+#             */
/*   Updated: 2021/12/27 14:59:45 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(/* args */)
{
}

Bureaucrat::Bureaucrat(const std::string Bname, int Bgrade):name(Bname)
{
	if (Bgrade < 1)
		throw GradeTooHighException();
	else if (Bgrade > 150)
		throw GradeTooLowException();
	else
		this->grade = Bgrade;
	
}
	
Bureaucrat::Bureaucrat(const Bureaucrat &p):name(p.name)
{
	*this = p;
}

Bureaucrat &Bureaucrat::operator= (const Bureaucrat &p)
{
	this->grade = grade;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
}

const std::string &Bureaucrat::getName() const
{
	return this->name;
}

int Bureaucrat::getGrade() const
{
	return this->grade;
}

void Bureaucrat::incrementGrade()
{
	if (this->grade == 1)
		throw GradeTooLowException();
	else
		this->grade--;
}

void Bureaucrat::decrementGrade()
{
	if (this->grade == 150)
		throw GradeTooHighException();
	else
		this->grade++;
}


std::ostream & operator<< (std::ostream &os ,const Bureaucrat &p)
{
	os << "Name: "  << p.getName() << std::endl;
	os << "Grade: " << p.getGrade() << std::endl;
	return os;
}