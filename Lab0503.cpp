//**********************************************
//	Student Name: Winnie Rui Jia Ren
//	Student Number: 20703958
//	SYDE 121	Lab:5	 Assignment:3
//	
//	Filename:	lab0503
// 	Date submitted: Oct.15, 2017
//	
//	I hereby declare that this code, submitted
//	for credit for the course SYDE121, is a product
// 	of my own efforts. This coded solution has
//	not been plagiarized from other sources and
//	as not been knowingly plagiarized by others.
//
// Program runs successfully
//***********************************************
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main ()
{
double tolerance = 0;
int term = 0;
double output = 0;
double difference = 0;
int count = 0;
double sum = 0;
double previous_sum = 0;
const double four = 4;

//ask user for tolerance

cout << "welcome to the table of pi! Please enter a tolerance you would like the table to have! " << endl;
cout << " Please enter a value that is greater than zero and less than 0.1." << endl;
cin  >> tolerance;
while (tolerance < 0.1 && tolerance > 0){

//calculating the terms of pi
for ( term = 1 ;; term += 2 )
{
	if (count%2 == 0)
	{
		previous_sum = sum;
		sum += (four/term);
		count ++;
		
const char separator = ' ';
const int width = 20;

cout << left << setw(width) << setfill (separator) << "term: " << term << " Pi Approximation: " << setprecision (13) << sum << endl;
		
		if (fabs(sum-previous_sum) < tolerance)
			break;
	}
	
	else
	{
		previous_sum = sum;
		sum -= (four/term);
		count ++;
		
const char separator = ' ';
const int width = 20;

cout << left << setw(width) << setfill (separator) << "term: " << term << " Pi Approximation: " << setprecision (13) << sum << endl;
		
		if (fabs(sum - previous_sum)<tolerance)
			break;
	}
}
return 0;
}
cout << " Please enter a value that is greater than zero and less than 0.1. " << endl;
}
