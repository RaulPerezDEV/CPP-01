/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raperez- <raperez-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 19:23:26 by raperez-          #+#    #+#             */
/*   Updated: 2025/07/05 16:16:43 by raperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombie1;

	zombie1 = newZombie("Zombie1");
	if (zombie1)
		zombie1->announce();
	delete zombie1;
	randomChump("Zombie2");
	return (0);
}
