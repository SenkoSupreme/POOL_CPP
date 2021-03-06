/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 18:34:02 by mbrija            #+#    #+#             */
/*   Updated: 2022/02/07 11:07:06 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(/* args */)
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyForm", 137, 145)
{
    this->target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &p)
{
    *this = p;
}
ShrubberyCreationForm &ShrubberyCreationForm::operator= (const ShrubberyCreationForm &p)
{
    this->target = p.target;
    return *this;
}


int ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > this->getGrade())
    {
        throw CantexecuteFormException();
    }
    else 
    {
        std::ofstream o(this->target + "_shrubbery");
        o <<  "                                     .         ;      " << std::endl;        
        o <<  "        .              .              ;%     ;;       " << std::endl;            
        o <<  "          ,           ,                :;%  %;        " << std::endl;           
        o <<  "           :         ;                   :;%;'     ., " << std::endl;            
        o <<  "  ,.        %;     %;            ;        %;'    ,;   " << std::endl;         
        o <<  "    ;       ;%;  %%;        ,     %;    ;%;    ,%'    " << std::endl;           
        o <<  "     %;       %;%;      ,  ;       %;  ;%;   ,%;'     " << std::endl;           
        o <<  "      ;%;      %;        ;%;        % ;%;  ,%;'       " << std::endl;      
        o <<  "       `%;.     ;%;     %;'         `;%%;.%;'         " << std::endl;              
        o <<  "        `:;%.    ;%%. %@;        %; ;@%;%'            " << std::endl;              
        o <<  "           `:%;.  :;bd%;          %;@%;'              " << std::endl;             
        o <<  "             `@%:.  :;%.         ;@@%;'               " << std::endl;             
        o <<  "               `@%.  `;@%.      ;@@%;                 " << std::endl;             
        o <<  "                 `@%%. `@%%    ;@@%;                  " << std::endl;           
        o <<  "                   ;@%. :@%%  %@@%;                   " << std::endl;        
        o <<  "                     %@bd%%%bd%%:;                    " << std::endl;           
        o <<  "                       #@%%%%%:;;                     " << std::endl;            
        o <<  "                       %@@%%%::;                      " << std::endl;          
        o <<  "                       %@@@%(o);  . '                 " << std::endl;                    
        o <<  "                       %@@@o%;:(.,'                   " << std::endl;                    
        o <<  "                   `.. %@@@o%::;                      " << std::endl;               
        o <<  "                      `)@@@o%::;                      " << std::endl;              
        o <<  "                       %@@(o)::;                      " << std::endl;                
        o <<  "                      .%@@@@%::;                      " << std::endl;                
        o <<  "                      ;%@@@@%::;.                     " << std::endl;            
        o <<  "                     ;%@@@@%%:;;;.                    " << std::endl;               
        o <<  "                 ...;%@@@@@%%:;;;;,..                 " << std::endl;
        return 1;
    }
    return 0;
}

