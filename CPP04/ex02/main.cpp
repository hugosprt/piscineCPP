#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
// const Animal* meta = new Animal();
// const Animal* j = new Dog();
// const Animal* i = new Cat();
// std::cout << j->getType() << " " << std::endl;
// std::cout << i->getType() << " " << std::endl;
// i->makeSound(); //will output the cat sound!
// j->makeSound();
// meta->makeSound();

// const Animal* meta2 = new Animal();
// const Animal* j2 = new Dog();
// const WrongAnimal* i2 = new WrongCat();
// std::cout << j2->getType() << " " << std::endl;
// std::cout << i2->getType() << " " << std::endl;
// i2->makeSound(); //will output the wrongcat sound!
// j2->makeSound();
// meta2->makeSound();

// delete meta;
// delete j;
// delete i;
// delete meta2;
// delete j2;
// delete i2;
// return 0;
	
	int n = 6;
	Animal* animals[n];
	for (int i = 0 ; i < 6 ; i++)
	{
		if (i % 2 == 0)
		{
			animals[i] = new Dog();
		}
		else
		{

			animals[i] = new Cat();
		}
	}
	animals[0]->makeSound();
	animals[1]->makeSound();

	for (int i = 0 ; i < 6 ; i++)
	{
			delete animals[i];
	}

	 Dog* j2 = new Dog();

	for (int i = 0 ; i < 6 ; i++)
	{
		if (i % 2 == 0)
		{
			j2->setIdea("manger", i);
		}
		else
		{

			j2->setIdea("jouer", i);
		}
		
	}
	// Animal test;

	for (int i = 0 ; i < 6 ; i++)
	{
		if (i % 2 == 0)
		{
			std::cout << j2->getIdea(i) << std::endl;
		}
		else
		{

			std::cout << j2->getIdea(i) << std::endl;
		}
		
	}
	delete j2;
	

}