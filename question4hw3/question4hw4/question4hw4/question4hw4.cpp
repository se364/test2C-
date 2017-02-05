/*Name: Shah Emran
  Date: 2/2/2017
  Homework 3
  Question 4*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	// The variables are set
	int choice;
	double r, l, w, h, area, pi = 3.14159;

	// Ask which area to find

	cout << "Geometry Calculator\n";
	cout << "    1. Calculate the Area of a Circle\n";
	cout << "    2. Calculate the Area of a Rectangle\n";
	cout << "    3. Calculate the Area of a Triangle\n";
	cout << "    4. Quit\n";
	cout << "    Enter your choice (1-4)\n\n";
	cin >> choice;


	switch (choice) {

	case 1:

		cout << "Enter the radius of the circle - ";
		cin >> r;
		while (r < 0)   // no negative dimensions
		{
			cout << "Error, please enter a positive dimension" << endl;
			cin >> r;
		}
		area = pi*(r, 2.0);    // area of circle
		cout << "The Area of the Circle is " << area << " metersquare" << endl;
		break;

	case 2:

		cout << "Enter the length of the rectangle - ";
		cin >> l;
		cout << "Enter the width of the rectangle - ";
		cin >> w;
		while (l < 0 || w < 0)
		{
			cout << "Error, please enter a positive dimension" << endl;
			cin >> l >> w;
		}
		area = l*w;       // area of rectangle
		cout << "The Area of the Rectangle is " << area << " metersquare" << endl;
		break;

	case 3:

		cout << "Enter the base of the triangle - ";
		cin >> l;
		cout << "Enter the height of the triangle - ";
		cin >> h;
		while (l < 0 || h < 0)
		{
			cout << "Error, please enter a positive dimension" << endl;
			cin >> l >> h;
		}
		area = l*h*0.5;      // area of triangle 
		cout << "The Area of the Triangle is " << area << " metersquare" << endl;
		break;

	case 4:

		cout << "Thank you" << endl;      // quits the program
		return 0;
		break;

	default:

		cout << "Enter the correct input from 1 to 4" << endl;   // tells to input within 1 to 4
		cin >> choice;
		break;
	}

	system("pause");

	return 0;




}