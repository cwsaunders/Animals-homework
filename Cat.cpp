#include <iostream>
#include <string>
#include "Mammal.h"
#include "Cat.h"

using namespace std;

Cat::Cat()
{
	cout << "Invoking cat constructor" << endl;
}

Cat::Cat(int weight)
{
	cout << "Invoking cat constructor" << endl;
	m = weight;
}

int Cat::getWeight() const //Virtual function
{
	return m.getWeight();
}

Cat::Cat(string catIn)
{
	cout << "Invoking cat constructor" << endl;
	setName(catIn);
}

Cat::Cat(int weight, string catIn)
{
	cout << "Invoking cat constructor" << endl;
	setName(catIn);
	m = weight;
}

void Cat::setName(string val)
{
	catName = val;
}

string Cat::getName() const //Virtual function
{
	return catName;
}

void Cat::speak() const //Virtual function
{
	cout << "Meow" << endl;
}