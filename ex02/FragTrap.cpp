/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmoud <mahmoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 21:05:16 by mahmoud           #+#    #+#             */
/*   Updated: 2024/08/27 21:09:57 by mahmoud          ###   ########.fr       */
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

void    FragTrap::highFivesGuys( void ) 
{
    if (this->energyPoints == 0 ) {
        std::cout << "FragTrap " << this->name << " is out of energy." << std::endl;
        return;
    }
    std::cout << "FragTrap " << this->name << " high fives everybody." << std::endl;
    this->energyPoints--;
}