#include <iostream>
#include <stdlib.h>
#include "AnimalsInZoo.h"

AnimalsInZoo::AnimalsInZoo(Animal animal)
{
	this->animal = animal;
	this->numAnimals = 1;
}

AnimalsInZoo::AnimalsInZoo() = default;

void AnimalsInZoo::display()
{
	std::cout << "numAnimals: " << numAnimals << std::endl;
	if (numAnimals != 0)
	{
		animal.display();
	}
}
