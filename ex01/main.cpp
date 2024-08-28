/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmoud <mahmoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 22:47:06 by mahmoud           #+#    #+#             */
/*   Updated: 2024/08/29 02:55:47 by mahmoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const int arraySize = 4;
    Animal* animals[arraySize];
    
    for (int i = 0; i < arraySize / 2; i++)
    {
        animals[i] = new Dog();
        animals[i + arraySize / 2] = new Cat();
    }
    
    for (int i = 0; i < arraySize; i++)
    {
        animals[i]->makeSound();
    }
    
    for (int i = 0; i < arraySize; i++)
    {
        delete animals[i];
    }
    
    return 0;
}