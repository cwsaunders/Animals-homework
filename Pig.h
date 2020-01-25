#pragma once
#include <iostream>
#include <string>
#include "Mammal.h"

class Pig :public Mammal
{
	std::string pigName;
	Mammal m;

public:
	Pig(int, std::string);
	Pig();
	Pig(int);
	Pig(std::string);
	virtual int getWeight() const override;
	virtual std::string getName() const override;
	void setName(std::string);
	virtual void speak() const override;
};