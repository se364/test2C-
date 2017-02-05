

/*Name: Shah Emran
Date: 2/1/2017
Homework 3
question 5*/

#include <iostream>
using namespace std;

int main()

{
	// The variables are set
	char letter;
	double minutes, pack1, pack2;
	cout << " Enter the package A, B and C - ";  // ask the package 
	cin >> letter;
	cout << " Enter number of minutes - ";   // ask the number of minutes
	cin >> minutes;

	pack1 = (minutes - 450)*0.45; // equation for finding extra bill for package 1
	pack2 = (minutes - 900)*0.40; // equation for finding extra bill for package 2

	switch (letter)
	{
	case 'A':
		if (minutes > 450)
		{
			cout << "The monthly bill is $ " << pack1 + 39.99 << endl;
		}
		else
		{
			cout << "The monthly bill is $ " << 39.99 << endl;
		}
		break;

	case 'B':
		if (minutes > 900)
		{
			cout << "The monthly bill is $ " << pack2 + 59.99 << endl;
		}
		else
		{
			cout << "The monthly bill is $ " << 59.99 << endl;
		}
		break;

	case 'C':

		cout << "The monthly bill is $ " << 69.99 << endl;
	}


	int x;
	cin >> x;

	return 0;


}