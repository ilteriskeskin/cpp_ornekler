#include "Person.h"

Person::Person()
{
	newHeight = 0;
	newWeight = 0.0;
}

Person::Person(string name, int height, double weight)
{
	newName = name;
	newHeight = height;
	newWeight = weight;
}

Person::~Person()
{

}

string Person:: getName() const
{

	return newName;
}

int Person::getHeight() const
{

	return newHeight;
}

double Person::getWeight() const
{

	return newWeight;
}

void Person::setName(string name)
{
	newName = name;
}

void Person::setHeight(int height)
{
	newHeight = height;
}

void Person::setWeight(double weight)
{
	newWeight = weight;
}

double Person::calculateBMI()
{

	return ((newWeight * 703) / (newHeight * newHeight));
}
