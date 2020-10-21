#include "circle.h"
#include <iostream>

using namespace std;

void Circle::display() const
{
	//(1, 2) - Radius: 3
	center.display();
	cout << " - Radius: " << radius << endl;
}

void Circle::promptForCircle()
{
	center.promptForPoint();
	cout << "Enter radius: ";
	cin >> radius;
}
