#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

int main()
{
	string name;
	int height;
	double weight;

	cout << "Ziyaretcinin ismini giriniz: ";
	cin >> name;

	cout << "Ziyaretcinin boyunu giriniz (cm biciminde): ";
	cin >> height;

	cout << "Ziyaretcinin kilosunu giriniz (kg biciminde): ";
	cin >> weight;

	/*
	Person person1(name, height, weight);

	cout << endl << 
		"Ziyaretcinin Ismi  : " << person1.getName() << endl << 
		"Ziyaretcinin Boyu  : " << person1.getHeight() << endl <<
		"Ziyaretcinin Kilosu: " << person1.getWeight() << endl;
	*/

	Person person2;

	person2.setName(name);
	person2.setHeight(height);
	person2.setWeight(weight);

        cout << endl << 
                "Ziyaretcinin Ismi  : " << person2.getName() << endl <<
                "Ziyaretcinin Boyu  : " << person2.getHeight() << endl <<
                "Ziyaretcinin Kilosu: " << person2.getWeight() << endl <<
		"BMI                : " << person2.calculateBMI() << endl;


	return 0;
}
