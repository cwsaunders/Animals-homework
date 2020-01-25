#include <iostream>
#include <string>
#include "Mammal.h"
#include "Pig.h"

using namespace std;

Pig::Pig()
{
	cout << "Invoking pig constructor" << endl;
}

Pig::Pig(int weight)
{
	cout << "Invoking pig constructor" << endl;
	m = weight;
}

Pig::Pig(string pigIn)
{
	cout << "Invoking pig constructor" << endl;
	setName(pigIn);
}

Pig::Pig(int weight, string pigIn)
{
	cout << "Invoking cat constructor" << endl;
	setName(pigIn);
	m = weight;
}

void Pig::setName(string val)
{
	pigName = val;
}

string Pig::getName() const //Virtual function
{
	return pigName;
}

void Pig::speak() const //Virtual function
{
	cout << "Oink" << endl;
}

int Pig::getWeight() const //Virtual function
{
	return m.getWeight();
}