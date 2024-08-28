/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmoud <mahmoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 22:33:09 by mahmoud           #+#    #+#             */
/*   Updated: 2024/08/29 02:07:10 by mahmoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : brain(new Brain())
{
    std::cout << "Cat constructor called" << std::endl;
    type = "Cat";
}

Cat::Cat(const Cat &copyTemplate)
{
    std::cout << "Cat copy constructor called" << std::endl;
    brain = new Brain(*copyTemplate.brain);
}

Cat &Cat::operator=(const Cat &initTemplate)
{
    if (this != &initTemplate)
    {
        this->type = initTemplate.type;
        brain = new Brain(*initTemplate.brain);
    }
    std::cout << "Cat assignment operator called" << std::endl;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete brain;
}

void Cat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}
