/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 21:05:16 by mahmoud           #+#    #+#             */
/*   Updated: 2024/08/28 09:48:28 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;

    std::cout << "FragTrap constructor called." << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called." << std::endl;
}

FragTrap::FragTrap()
{
    std::cout << "FragTrap constructor called." << std::endl;
}
FragTrap::FragTrap(const FragTrap &copyTemplate) : ClapTrap(copyTemplate)
{
    *this = copyTemplate;
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap&   FragTrap::operator=( const FragTrap &initTemplate ) 
{
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    this->name = initTemplate.name;
    this->hitPoints = initTemplate.hitPoints;
    this->energyPoints = initTemplate.energyPoints;
    this->attackDamage = initTemplate.attackDamage;
    return *this;
}

void    FragTrap::highFivesGuys( void ) 
{
    if (this->energyPoints == 0 ) {
        std::cout << "FragTrap " << this->name << " is out of energy." << std::endl;
        return;
    }
    std::cout << "FragTrap " << this->name << " high fives everybody." << std::endl;
    this->energyPoints--;
}