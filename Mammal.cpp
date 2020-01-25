#include <iostream>
#include <string>
#include "Mammal.h"

using namespace std;

Mammal::Mammal()
{
	setWeight(0);
	cout << "Invoking mammal default constructor" << endl;
}

Mammal::Mammal(int weightIn)
{
	setWeight(weightIn);
	cout << "Invoking mammal custom constructor" << endl;
}

int Mammal::getWeight() const //Virtual function
{
	return weight;
}

void Mammal::setWeight(int mammalWeight)
{
	weight = mammalWeight;
}

void Mammal::speak() const //Virtual function
{
	cout << "Mammal is speaking" << endl;
}

string Mammal::getName() const //Virtual function
{
	//Here for virtualization of other getNames
	return "dummyfunction";
}