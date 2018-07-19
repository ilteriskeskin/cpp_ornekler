#include <iostream>
#include <string>

using namespace std;

#ifndef PERSON_H
#define PERSON_H

class Person
{
	public:
		//Default Constructor
		Person();
		
		//Overload Constructor
		Person(string, int, double);

		//Destructor
		~Person();

		//Accessor Functions
		string getName() const;

		int getHeight() const;

		double getWeight() const;
		
		void setName(string);
		
		void setHeight(int);

		void setWeight(double);

		double calculateBMI();

	private:
		string newName;
		int newHeight;
		double newWeight;

};

#endif
