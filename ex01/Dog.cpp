/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmoud <mahmoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 22:24:16 by mahmoud           #+#    #+#             */
/*   Updated: 2024/08/29 02:06:54 by mahmoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : brain(new Brain())
{
    std::cout << "Dog constructor called" << std::endl;
    type = "Dog";
}

Dog::Dog(const Dog &copyTemplate)
{
    std::cout << "Dog copy constructor called" << std::endl;
    brain = new Brain(*copyTemplate.brain);
}

Dog &Dog::operator=(const Dog &initTemplate)
{
    if (this != &initTemplate)
    {
        this->type = initTemplate.type;
        brain = new Brain(*initTemplate.brain);
    }
    std::cout << "Dog assignment operator called" << std::endl;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete brain;
}

void Dog::makeSound() const
{
    std::cout << "Woof!" << std::endl;
}
