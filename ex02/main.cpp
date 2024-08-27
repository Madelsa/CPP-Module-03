/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmoud <mahmoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 19:38:35 by mahmoud           #+#    #+#             */
/*   Updated: 2024/08/27 21:11:50 by mahmoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main( void )
{
    FragTrap ash("robot");
    std::cout << std::endl;
    ash.attack("target");
    std::cout << std::endl;
    ash.takeDamage(10);
    std::cout << std::endl;
    ash.beRepaired(10);
    std::cout << std::endl;
    ash.highFivesGuys();
    std::cout << std::endl;
}