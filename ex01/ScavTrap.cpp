/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 20:21:01 by mahmoud           #+#    #+#             */
/*   Updated: 2024/08/28 09:47:22 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;

    std::cout << "ScavTrap constructor called." << std::endl;
}

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap constructor called." << std::endl;
}


ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copyTemplate) : ClapTrap(copyTemplate)
{
    *this = copyTemplate;
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap&   ScavTrap::operator=( const ScavTrap &initTemplate ) 
{
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    this->name = initTemplate.name;
    this->hitPoints = initTemplate.hitPoints;
    this->energyPoints = initTemplate.energyPoints;
    this->attackDamage = initTemplate.attackDamage;
    return *this;
}

void    ScavTrap::attack( std::string const& target ) 
{
    if (energyPoints == 0) 
    {
        std::cout << "ScavTrap " << this->name << " is out of energy." << std::endl;
        return;
    }
    std::cout << "ScavTrap " << this->name << " attacks " << target << " at range, causing " << this->attackDamage << " points of damage !" << std::endl;
    energyPoints--;
}

void    ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode." << std::endl;
}