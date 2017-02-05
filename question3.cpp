/*Name: Shah Emran
  Date: 1/31/2017
  Homework: 3
  Question 3*/

#include <iostream>
using namespace std;

int main()

{
	// The variabes are set
	double balance, checks;
	double a, b, c, d;
	a = 10.0 + 0.10;
	b = 10.0 + 0.08;
	c = 10.0 + 0.06;
	d = 10.0 + 0.04;

	cout << "Enter the balance ";  // ask the number of balance
	cin >> balance;
	cout << "Enter number of checks ";  // ask the number of checks
	cin >> checks;

	if ( balance < 0)
	{
		cout << " Enter a positive balance ";
		cin >> balance;
		
	}
	else if (balance < 400)
	{
		if (checks < 20)
		{
			cout << "The bank service fee is " << a + 15 << endl;
		}
		else if(checks >=20)
		{
			cout << "The bank service fee is " << b + 15 << endl;

		}
		else if (checks >= 40)
		{
			cout << "The bank service fee is " << c + 15 << endl;
		}
		else if (checks >= 60)
		{
			cout << "The bank service fee is " << d + 15 << endl;
		}

	}
	else if (checks < 20)
	{
		cout << "The bank service fee is " << a  << endl;
	}
	else if (checks >= 20)
	{
		cout << "The bank service fee is " << b  << endl;

	}
	else if (checks >= 40)
	{
		cout << "The bank service fee is " << c  << endl;
	}
	else if (checks >= 60)
	{
		cout << "The bank service fee is " << d  << endl;
	}

	else
	{
		cout << "The bank balance is " << balance << endl;

	}



	system("pause");

	return 0;


}