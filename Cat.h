#pragma once
#include <iostream>
#include <string>
#include "Mammal.h"

class Cat :public Mammal
{
	std::string catName;
	Mammal m;

public:
	Cat();
	Cat(int);
	Cat(std::string);
	Cat(int, std::string);
	virtual std::string getName() const override;
	virtual int getWeight() const override;
	void setName(std::string);
	virtual void speak() const override;
};
