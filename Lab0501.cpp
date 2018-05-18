//**********************************************
//	Student Name: Winnie Rui Jia Ren
//	Student Number: 20703958
//	SYDE 121	Lab:5	 Assignment:1
//	
//	Filename:	lab0501
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
#include <cstdlib>
using namespace std;

int main ()
{
	
// Declaring variables
	int row = 0;
	int column = 0;
	int input = 0;
	int middle_row = 0;
	int space = 0;
	int star_num = 0;

//Asking for output
	cout << "Welcome to the diamond generater!" << endl;
	cout << "Please enter an odd number less than 20 to represent the number of rows for your diamond: ";
	cin  >> input;
	
	while ( input >= 20 || input%2 == 0)
	{
		cout << " The value you have entered is not an odd number less than 20! Please try again!";
		cout << " Enter a new number please: " << endl;
		cin  >> input;
	}
	

// Creating the diamond
middle_row = input/2 + 1;
	for ( row = 0; row <= input; row ++)
	{
		for ( space = 0; space <= abs (middle_row - row); space ++)
		{
		cout << " ";
		}
		if ( row <= middle_row)
		star_num = row*2 - 1;
		else 
		star_num = (2*middle_row - row)*2 - 1;
		for ( column = 1; column <= star_num; column ++)
		{
			cout << "*";
		}
		cout << endl;
	}
}



