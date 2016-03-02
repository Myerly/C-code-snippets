//This reference program shows the formula for computing profit, as well as other C++ help.

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

double stringToNumber(string);
void compute_sales_profit(string);

int main(int argc, char *argv[])
{
	string string_input = "|";

	cout << "Enter vehicle sales price: " << endl;
	getline(cin, string_input);
	compute_sales_profit(string_input);

	while (string_input != "")
	{
		cout << "Enter the vehicle sales price: " << endl;
		getline(cin, string_input);

		if (string_input != "")
		{
			compute_sales_profit(string_input);
		}
	}

	cout << "Thank you for using the sales profit program" << endl;
	return 0;
}

double stringToNumber(string input)
{
	double number = atof(input.c_str());
	return number;
}

void compute_sales_profit(string string_input)
{
	double actual_price = 0;
	double sales_price = 0;
	double profit = 0;
	
	sales_price = stringToNumber(string_input);

	cout << "Enter teh vehicle actual price: " << endl;
	getline(cin, string_input);
	actual_price = stringToNumber(string_input);
	
	profit = sales_price - actual_price;

	cout << "Vehicle profit is: " << profit << endl;
}