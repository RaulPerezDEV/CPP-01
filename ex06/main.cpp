/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raperez- <raperez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 12:29:06 by raperez-          #+#    #+#             */
/*   Updated: 2025/07/03 16:53:37 by raperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl harl;

	if (argc != 2)
	{
		std::cerr << "USAGE: ./harlFilter LEVEL" << std::endl;
		return (1);
	}
	harl.filter(argv[1]);
	return (0);
}
