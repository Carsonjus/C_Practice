// Pi_To_Nth.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "pch.h"
#include <iostream>
#include <iomanip> //Used to set precision for e
#include <math.h>
using namespace std;

int main()
{
	const double e = 2.71828182845904523536028747135266249775724709369995957496696;
	int decimalPlaces;
	cout << "Enter how many decimal places of e you would like to see (limit 48): " << endl;
	cin >> decimalPlaces;
	decimalPlaces++;
	cout << setprecision(decimalPlaces) << e << endl;
	return 0;
}
