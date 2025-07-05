/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raperez- <raperez-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 16:03:02 by raperez-          #+#    #+#             */
/*   Updated: 2025/07/05 16:04:26 by raperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

#include <iostream>
#include <fstream>
#include <cstdlib>

void	manage_file(std::string filename, std::string s1, std::string s2);
void	ft_replace(std::string& s, const std::string& target, const std::string& replacement);

#endif