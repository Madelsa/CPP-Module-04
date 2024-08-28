/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmoud <mahmoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 01:01:13 by mahmoud           #+#    #+#             */
/*   Updated: 2024/08/29 02:38:20 by mahmoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &copyTemplate) 
{
	std::cout << "Brain copy constructor called" << std::endl;
	for(int i = 0; i < 100; i++)
		ideas[i] = copyTemplate.ideas[i];
}

Brain &Brain::operator=(const Brain &initTemplate) {
	std::cout << "Brain copy assignment operator called" << std::endl;

	if(this != &initTemplate) 
    {
		for(int i = 0; i < 100; i++)
			ideas[i] = initTemplate.ideas[i];
	}
	return *this;
}


