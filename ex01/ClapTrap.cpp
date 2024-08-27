/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmoud <mahmoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 19:14:01 by mahmoud           #+#    #+#             */
/*   Updated: 2024/08/27 20:27:01 by mahmoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap " << this->name << " is born!" << std::endl;
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
    std::cout << "Before attack: " << this->name << " has " << this->energyPoints << " energy points." << std::endl;
    if (this->energyPoints == 0)
    {
        std::cout << "ClapTrap " << this->name << " is out of energy!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
    this->energyPoints--;
    std::cout << "After attack: " << this->name << " has " << this->energyPoints << " energy points left." << std::endl;
}


void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "Before taking damage: " << this->name << " has " << this->hitPoints << " hit points." << std::endl;
    if (this->hitPoints <= amount)
    {
        std::cout << "ClapTrap " << this->name << " is dead!" << std::endl;
        this->hitPoints = 0;
        return;
    }
    std::cout << "ClapTrap " << this->name << " takes " << amount << " damage!" << std::endl;
    this->hitPoints -= amount;
    std::cout << "After taking damage: " << this->name << " has " << this->hitPoints << " hit points left." << std::endl;
}


void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "Before repair: " << this->name << " has " << this->energyPoints << " energy points and " << this->hitPoints << " hit points." << std::endl;
    if (this->energyPoints == 0)
    {
        std::cout << "ClapTrap " << this->name << " is out of energy!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->name << " repairs itself for " << amount << " hit points!" << std::endl;
    this->hitPoints += amount;
    this->energyPoints--;
    std::cout << "After repair: " << this->name << " has " << this->energyPoints << " energy points and " << this->hitPoints << " hit points." << std::endl;
}
