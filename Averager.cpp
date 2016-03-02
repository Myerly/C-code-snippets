#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

double stringToNumber(string);
double compute_average(double sum, int count);

int main(int argc, char *argv[])
{
	double sum = 0;
	double average = 0;
	int count = 0;
	double number = 0;
	string string_input = "|";

	while (string_input != "")
	{
		cout << "Enter a number: " << endl;
		getline(cin, string_input);

		if (string_input != "")
		{
			number = stringToNumber(string_input);
			sum = sum + number;
			count = count + 1;
		}
	}

	if (count > 0)
	{
		average = compute_average(sum, count);
		cout << "Average is: " << average << endl;
	}
	else
	{
		cout << "No numbers entered - nothing to average" << endl;
	}
	
	return 0;
}

double stringToNumber(string input)
{
	double number = atof(input.c_str());
	return number;
}

double compute_average(double sum, int count)
{
	double avg = sum / count;
	return avg;
}