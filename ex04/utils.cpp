/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raperez- <raperez-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 16:02:55 by raperez-          #+#    #+#             */
/*   Updated: 2025/07/05 16:03:28 by raperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

void	ft_replace(std::string& s, const std::string& target,
	const std::string& replacement)
{
	size_t	pos;

	if (target.empty())
		return ;
	pos = s.find(target);
	while (pos != std::string::npos)
	{
		s.erase(pos, target.length());
		s.insert(pos, replacement);
		pos = s.find(target, pos + replacement.length());
	}
}

void	manage_file(std::string filename, std::string s1, std::string s2)
{
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		str;

	infile.open(filename.c_str());
	if (!infile.is_open())
	{
		std::cerr << "Error: opening \'" << filename << "\'\n";
		exit(1);
	}
	outfile.open((filename + ".replace").c_str());
	if (!outfile.is_open())
	{
		std::cerr << "Error: opening \'" << filename << ".replace\'\n";
		infile.close();
		exit(1);
	}
	std::getline(infile, str, '\0');
	ft_replace(str, s1, s2);
	outfile << str;
	infile.close();
	outfile.close();
}
