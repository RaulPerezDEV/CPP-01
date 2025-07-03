/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raperez- <raperez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 12:29:11 by raperez-          #+#    #+#             */
/*   Updated: 2025/07/03 16:59:31 by raperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	this->functions[0] = &Harl::debug;
	this->functions[1] = &Harl::info;
	this->functions[2] = &Harl::warning;
	this->functions[3] = &Harl::error;
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my " <<
		"7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. " <<
		"You didn't put enough bacon in my burger! " <<
		"If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free.\n" <<
		"I've been coming for years, whereas you started working here" <<
		"just last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::complain(std::string level)
{
	const std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;

	while (i < 4)
	{
		if (level == levels[i])
		{
			(this->*(functions[i]))();
			break ;
		}
		i++;
	}
}

void	Harl::filter(std::string level)
{
	const std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;

	while (i < 4)
	{
		if (level == levels[i])
		{
			while (i < 4)
			{
				std::cout << "[" << levels[i] << "]" << std::endl;
				(this->*(functions[i++]))();
				std::cout << std::endl;
			}
			return ;
		}
		i++;
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
