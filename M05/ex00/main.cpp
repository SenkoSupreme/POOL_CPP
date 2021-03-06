/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 12:57:32 by mbrija            #+#    #+#             */
/*   Updated: 2022/01/04 15:19:43 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b("Name", 150);
        b.incrementGrade();

        std::cout << b;
        std::cout << b;
            b.decrementGrade();
        std::cout << b;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}