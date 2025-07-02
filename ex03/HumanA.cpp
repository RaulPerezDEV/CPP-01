/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raperez- <raperez-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:01:00 by raperez-          #+#    #+#             */
/*   Updated: 2025/07/02 13:47:07 by raperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon), name(name)
{
	std::cout << "HumanA called \'" << this->name << "\' has been created with the weapon " <<
		this->weapon.get_type() << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout  << "HumanA called \'" << name << "\' has been deleted" << std::endl;  
}

void	HumanA::attack(void)
{
	std::cout << name << " attacks with their " << weapon.get_type() << std::endl;
}

void	HumanA::setWeapon(Weapon &weapon)
{
	this->weapon = weapon;
}
