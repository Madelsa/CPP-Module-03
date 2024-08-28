/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 20:12:17 by mahmoud           #+#    #+#             */
/*   Updated: 2024/08/28 09:37:08 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap( std::string name );
        ~ScavTrap();
        ScavTrap(const ScavTrap &initTemplate);
        ScavTrap &operator=(const ScavTrap& copyTemplate);
        void    attack(std::string const& target);
        void    guardGate();
};

#endif
