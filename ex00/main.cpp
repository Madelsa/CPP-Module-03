/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmoud <mahmoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 19:38:35 by mahmoud           #+#    #+#             */
/*   Updated: 2024/08/27 20:09:48 by mahmoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("robot");
    std::cout << std::endl;
    clap.attack("target");
    std::cout << std::endl;
    clap.takeDamage(5);
    std::cout << std::endl;
    clap.beRepaired(1);
    std::cout << std::endl;
}