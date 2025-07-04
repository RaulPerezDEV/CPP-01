/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raperez- <raperez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 10:59:34 by raperez-          #+#    #+#             */
/*   Updated: 2025/07/04 16:24:37 by raperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstdlib>

void	ft_replace(std::string& s, const std::string& target,
	const std::string& replacement)
{
	size_t	pos;

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
		outfile.close();
		exit(1);
	}
	std::getline(infile, str, '\0');
	ft_replace(str, s1, s2);
	outfile << str;
	infile.close();
	outfile.close();
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Error: expected three arguments" << std::endl;
		return (1);
	}
	manage_file(argv[1], argv[2], argv[3]);
	return (0);
}
