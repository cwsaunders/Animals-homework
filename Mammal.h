#pragma once
#include <iostream>
#include <string>

class Mammal
{
	int weight;

public:
	Mammal(int);
	Mammal();
	virtual int getWeight() const;
	void setWeight(int);
	virtual std::string getName() const;
	virtual void speak() const;
};
