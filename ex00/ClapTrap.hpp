/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 19:14:02 by mahmoud           #+#    #+#             */
/*   Updated: 2024/08/28 09:43:32 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    private:
    std::string name;
    unsigned int hitPoints;
    unsigned int energyPoints;
    unsigned int attackDamage;

    public:
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ClapTrap();
    ClapTrap( std::string name );
    ~ClapTrap();
    ClapTrap(const ClapTrap &initTemplate);
    ClapTrap &operator=(const ClapTrap& copyTemplate);
};

#endif