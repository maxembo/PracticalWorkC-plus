#include<iostream>

using namespace std;

class Animal
{
public:
	virtual void Voice() 
	{
		cout << "Hi" << endl;
	}
};

class Dog : public Animal
{
	void Voice() override
	{
		cout << "Dog: Woof!" << endl;
	}
};

class Cat : public Animal
{
	void Voice() override
	{
		cout << "Cat: Meow!" << endl;
	}
};

class Mouse : public Animal
{
	void Voice() override
	{
		cout << "Mouse: Pipi!" << endl;
	}
};

void main()
{
	Animal* animal[]{ new Dog,new Cat,new Mouse };

	for (unsigned int i = 0; i < size(animal); ++i)
		animal[i]->Voice();
}