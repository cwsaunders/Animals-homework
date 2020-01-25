#pragma once
#include <iostream>
#include <string>
#include "Mammal.h"

class Dog :public Mammal
{
	std::string dogName;
	Mammal m;

public:
	Dog();
	Dog(int);
	Dog(std::string);
	Dog(int, std::string);
	virtual std::string getName() const override;
	virtual int getWeight() const override;
	void setName(std::string);
	virtual void speak() const override;
};

