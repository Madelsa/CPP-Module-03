/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmoud <mahmoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 19:14:01 by mahmoud           #+#    #+#             */
/*   Updated: 2024/08/27 20:09:00 by mahmoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap " << name << " is born!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &rhs)
{
    *this = rhs;
    std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap&   ClapTrap::operator=( const ClapTrap &initTemplate ) 
{
    this->name = initTemplate.name;
    this->hitPoints = initTemplate.hitPoints;
    this->energyPoints = initTemplate.energyPoints;
    this->attackDamage = initTemplate.attackDamage;
    return *this;
}

void ClapTrap::attack(std::string const &target)
{
    std::cout << "Before attack: " << name << " has " << energyPoints << " energy points." << std::endl;
    if (energyPoints == 0)
    {
        std::cout << "ClapTrap " << name << " is out of energy!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
    energyPoints--;
    std::cout << "After attack: " << name << " has " << energyPoints << " energy points left." << std::endl;
}


void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "Before taking damage: " << name << " has " << hitPoints << " hit points." << std::endl;
    if (hitPoints <= amount)
    {
        std::cout << "ClapTrap " << name << " is dead!" << std::endl;
        hitPoints = 0;
        return;
    }
    std::cout << "ClapTrap " << name << " takes " << amount << " damage!" << std::endl;
    hitPoints -= amount;
    std::cout << "After taking damage: " << name << " has " << hitPoints << " hit points left." << std::endl;
}


void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "Before repair: " << name << " has " << energyPoints << " energy points and " << hitPoints << " hit points." << std::endl;
    if (energyPoints == 0)
    {
        std::cout << "ClapTrap " << name << " is out of energy!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << name << " repairs itself for " << amount << " hit points!" << std::endl;
    hitPoints += amount;
    energyPoints--;
    std::cout << "After repair: " << name << " has " << energyPoints << " energy points and " << hitPoints << " hit points." << std::endl;
}
