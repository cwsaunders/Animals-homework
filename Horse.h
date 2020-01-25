#pragma once
#include <iostream>
#include <string>
#include "Mammal.h"

class Horse :public Mammal
{
	std::string horseName;
	Mammal m;

public:
	Horse();
	Horse(int);
	Horse(std::string);
	Horse(int, std::string);
	virtual std::string getName() const override;
	void setName(std::string);
	virtual void speak() const override;
	virtual int getWeight() const override;
};