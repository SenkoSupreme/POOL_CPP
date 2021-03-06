/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 15:01:38 by mbrija            #+#    #+#             */
/*   Updated: 2021/12/13 14:34:01 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SCAV_TRAP_HPP_
#define _SCAV_TRAP_HPP_

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
    /* data */
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &p);
    ~ScavTrap();
    ScavTrap & operator= (const ScavTrap &p);
    void attack( const std::string &target);
    void guardGate();
};


#endif