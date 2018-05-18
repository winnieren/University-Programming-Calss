//**********************************************
//	Student Name: Winnie Rui Jia Ren
//	Student Number: 20703958
//	SYDE 121	Lab:6	 Assignment:4
//	
//	Filename:	lab0601
// 	Date submitted: Oct.21, 2017
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

int interative ( int a, int b, int c, int i, int n);
// calculaing the fibanoci sequence with three if-statements that allows different calculations to be done for different terms
// 	INPUT: term, first term = 0, second term = 1

int recursive (int n);
// calculating the fibanoci sequence by looping the function to recursively calculate the sum
//	INPUT: term, first term = 0, second term = 1

int main ()
{

int ans = 0;
int a = 0;
int b = 1;
int c = 1;
int n = 0;
int i = 0;
	
cout << " Welcome to the Fibonacci sequence calculator."<< endl;
cout << " Please enter the term for which you would like to calculate for the sequence.";
cin  >> n;
	
int intera = interative ( a, b , c, i, n);
cout << intera << endl;
int recur =	recursive (n);
cout << recur << endl;

	
}

int interative ( int a, int b, int c, int i, int n)
{
	int ans;
	if (n == 1) 
	{
		ans = 0;
	}
	
	for (int x=2; x <=i; x ++)
	{
		if (x % 3 == 1)
		{
			a = b + c;
			ans = a;
		}
		
		if (x % 3 == 2 )
		{
			b = a + c;
			ans = b;
		}
	
		if (x % 3 == 0 )
		{
			c = a + b;
			ans = c;
		}
	}
	
	return ans; 
}

int recursive (int n)
{
	if (n == 1)
	{
		return 0;
	}
	if (n == 2)
	{
		return 1;
	}
	else 
	{
		return recursive(n-1) + recursive(n-2);
	}
}
