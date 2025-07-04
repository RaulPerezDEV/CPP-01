/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raperez- <raperez-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:26:47 by raperez-          #+#    #+#             */
/*   Updated: 2025/07/04 23:30:58 by raperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : weapon(NULL), name(name)
{
	std::cout << "HumanB called \'" << this->name << "\' has been created with no weapon" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout  << "HumanB called \'" << name << "\' has been deleted" << std::endl;  
}

void	HumanB::attack(void)
{
	if (weapon)
		std::cout << name << " attacks with their " << (*weapon).getType() << std::endl;
	else
		std::cout << name << " don't have any weapon to attack" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
