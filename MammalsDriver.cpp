//<CSIS 112 Lab 7 Christian Saunders> -- This program accepts user input to create member objects that outputs animal noises, names
//and weights.
//CSIS 112-<002>
//<C++ How to Program>,<In class project>

//Include statements
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include "Mammal.h"
#include "Cat.h"
#include "Dog.h"
#include "Horse.h"
#include "Pig.h"


using namespace std;

int main()
{

	cout << "Christian Saunders -- Lab 7" << endl << endl;

	//Variable declarations
	
	Mammal m1;
	int input; //For entering animals
	string name; //For constructors
	
	
	

	//Program logic

	Mammal * mPtr{ &m1 };
	Mammal * base_class_pointer_to_derived_object{ &m1 };
	vector<Mammal*> mammals;
	Mammal m2;
	Mammal* m2Ptr{ &m2 };


	srand(100);
	

	for (int i = 0; i < 5; i++)
	{
		cout << "1. Dog" << endl << "2. Cat" << endl << "3. Horse" << endl << "4. Pig" << endl; //Prompt
		cin >> input;
		while (cin.fail()) //Error checking
		{
			cout << "Must be integer between 1 and 4" << endl; //Error message
			cin.clear();
			cin.ignore(10000, '\n');
			cin >> input;
		}

		if (input == 1)
		{
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "Enter name for animal" << endl; //Prompt
			cin >> name;
			mammals.push_back(new Dog(rand() % 150 + 1, name));
		}

		if (input == 2)
		{
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "Enter name for animal" << endl; //Prompt
			cin >> name;
			mammals.push_back(new Cat(rand() % 150 + 1, name));
		}
		if (input == 3)
		{
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "Enter name for animal" << endl; //Prompt
			cin >> name;
			mammals.push_back(new Horse(rand() % 150 + 1, name));
		}

		if (input == 4)
		{
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "Enter name for animal" << endl; //Prompt
			cin >> name;
			mammals.push_back(new Pig(rand() % 150 + 1, name));
		}
		cin.clear();
		cin.ignore(10000, '\n');
	}

	for (Mammal*mammalPtr : mammals)
	{
		cout << "Animal noise: " << endl;
		mammalPtr->speak();
		cout << "Animal name: " << endl << mammalPtr->getName() << endl;
		cout << "Animal weight: " << endl << mammalPtr->getWeight() << endl;
		cout << "--" << endl;
	}




	//Closing program statements
	system("pause");
	return 0;
}