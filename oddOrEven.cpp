//Useful reference program to tell if a number is odd or even.
//needs number validation

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[])
{
	string input = "|";
	int number = 0;

	cout << "Enter a number: " << endl;
	getline(cin, input);

	number = atoi(input.c_str());

	while ()
	{
		if (number % 2 == 0)
		{
			cout << "Number is even" << endl;
		}
		else
		{
			cout << "Number is Odd" << endl;
		}
	}

	return 0;
}
