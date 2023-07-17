#pragma once

//
// TO BE COMPLETED
// YOU MAY ADD OTHER CLASSES, VARIABLES, METHODS, ... AS NEEDED
//
/*ZAYAN TOFEEQ*/
#include <string>
#include <iostream>
#include "ExtendableVector.h"

using namespace std;


class Enrollment {
private:

	 ExtendableVector<string> undergraduate;
	 ExtendableVector<string> graduate;

public:
	string firstlast(string first, string last)
	{
		string jointname = first + " " + last;
		return jointname;
	}


	void addUndergraduate(string firstname, string lastname)

	{
		undergraduate.push_back(firstlast(firstname, lastname));
		cout << firstname << " " << lastname;

	}


	void addGraduate(string firstname, string lastname)
	{
		graduate.push_back(firstlast(firstname, lastname));
		cout << firstname << " " << lastname;

	}

	void printInOrder()
	{

		for (int i = 0; i < graduate.size(); i++)
		{
			cout << graduate[i] <<"\n";
		}
		for (int i = 0; i < undergraduate.size(); i++)
		{
			cout << undergraduate[i]<<"\n";
		}
}
};
