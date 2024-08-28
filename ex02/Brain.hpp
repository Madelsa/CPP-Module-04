/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmoud <mahmoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 01:00:26 by mahmoud           #+#    #+#             */
/*   Updated: 2024/08/29 02:38:08 by mahmoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{   
    private:
	std::string ideas[100];
    
    public:
        Brain();
        Brain(const Brain &copyTemplate);
        Brain &operator=(const Brain &initTemplate);
        ~Brain();
        void makeSound() const;
};

#endif