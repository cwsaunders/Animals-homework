#include <iostream>
#include <string>
#include "Mammal.h"
#include "Horse.h"

using namespace std;

Horse::Horse()
{
	cout << "Invoking horse constructor" << endl;
}

Horse::Horse(int weight)
{
	cout << "Invoking horse constructor" << endl;
	m = weight;
}

Horse::Horse(string horseIn)
{
	cout << "Invoking cat constructor" << endl;
	setName(horseIn);
}

Horse::Horse(int weight, string horseIn)
{
	cout << "Invoking cat constructor" << endl;
	setName(horseIn);
	m = weight;
}

int Horse::getWeight() const //Virtual function
{
	return m.getWeight();
}

void Horse::setName(string val)
{
	horseName = val;
}

string Horse::getName() const //Virtual function
{
	return horseName;
}

void Horse::speak() const //Virtual function
{
	cout << "Im Mr. Ed" << endl;
}