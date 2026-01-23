/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 16:56:33 by soochoi           #+#    #+#             */
/*   Updated: 2026/01/23 16:14:48 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain
{
	private:
		std::string	ideas[100];
		int	index_;
	public:
		Brain();
		Brain(const Brain& copyObj);
		Brain&	operator=(const Brain& copyObj);
		~Brain();
		std::string	getIdea(int index);
		void	setIdea(std::string idea);
		void	clearBrain();
};

#endif

