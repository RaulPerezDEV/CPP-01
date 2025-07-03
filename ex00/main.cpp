/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raperez- <raperez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 19:23:26 by raperez-          #+#    #+#             */
/*   Updated: 2025/07/03 12:11:25 by raperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombie1;

	zombie1 = newZombie("Heap");
	if (zombie1)
		zombie1->announce();
	randomChump("Stack");
	delete zombie1;
	return (0);
}
