// Pi_To_Nth.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "pch.h"
#include <iostream>
#include <iomanip> //Used to set precision for PI
#include <math.h>
using namespace std;

int main()
{
	const double PI = 3.141592653589793238462643383279502884197169399375;
	int decimalPlaces;
	cout << "Enter how many decimal places of PI you would like to see (limit 48): " << endl;
	cin >> decimalPlaces;
	decimalPlaces++;
	cout << setprecision(decimalPlaces) << PI << endl;
	return 0;
}
