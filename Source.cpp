/*Name: Shah Emran
  Date : 1/24/2017
  CS&131
*/

#include <iostream>
#include<iomanip>
using namespace std;

int main ()
{
	const double Air = 1100;
	const double Water = 4900;
	const double Steel = 16400;

	
	int choice;
	double distance;
	double time;

	cout << "Select medium:\n"
		<< "1. air"
		<< "2. water"
		<< "3. steel"
		<< " Enter the choice  ";
	cin >> choice;

	cout << fixed << showpoint << setprecision(4);

	
	switch (choice)
	 {
	case 1:
		cout << " Enter the distace" << endl;
		cin >> distance;
		cout << "time used to travel in air " << distance / Air << endl;

	case 2:
		cout << " Enter the distance" << endl;
		cin >> distance;
		cout << "Time used to travel in water " << distance / Water << endl;

	case 3:
		cout << " Enter the distance" << endl;
		cin >> distance;
		cout << "Time used to travel in water " << distance / Steel << endl;
		break;

	default :
		cout << "The distance cannot be zero" << endl;

	}


	int x;
	cin >> x;

	return 0;

}