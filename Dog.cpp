#include <iostream>
#include <string>
#include "Mammal.h"
#include "Dog.h"

using namespace std;

Dog::Dog()
{
	cout << "Invoking dog constructor" << endl;
}

Dog::Dog(int weight)
{
	cout << "Invoking dog constructor" << endl;
	m = weight;
}

int Dog::getWeight() const //Virtual function
{
	return m.getWeight();
}

Dog::Dog(string dogIn)
{
	cout << "Invoking dog constructor" << endl;
	setName(dogIn);
}

Dog::Dog(int weight, string dogIn)
{
	cout << "Invoking dog constructor" << endl;
	setName(dogIn);
	m = weight;
}

void Dog::setName(string val)
{
	dogName = val;
}

string Dog::getName() const //Virtual function
{
	return dogName;
}

void Dog::speak() const //Virtual function
{
	cout << "Woof" << endl;
}