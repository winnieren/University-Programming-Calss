//**********************************************
//	Student Name: Winnie Rui Jia Ren
//	Student Number: 20703958
//	SYDE 121	Lab:6	 Assignment:1
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

void input ( double &a, double &b, double &c );
// Enter a, b, c values
// 		INPUT: a, b, c

void roots ( double &a, double &b, double &c, double &discrim, double &quad_pos, double &quad_neg, double &root );
// Calculate the roots using a, b, c
// 		INPUT: a, b, c

void quad ( double &discrim, double &quad_pos, double &quad_neg, double &root, double a1);
// Outputing the roots
//		INPUT: caculated roots


int main ()
{
double a = 0;
double b = 0;
double c = 0;
double discrim = 0;
double quad_pos = 0;
double quad_neg = 0;
double root = 0;

input( a, b, c );
//Asking for coefficients of the equation. Enter data for ax^2 + bx + c

roots ( a, b, c, discrim, quad_pos, quad_neg, root );
//Using the values of a, b, and c to calculate: 
// - the discriminant (double discrim)
// - the roots (if the discriminant is greater than zero)
// - the real value of the root if the root is a complex number ( double root)

quad ( discrim, quad_pos, quad_neg, root, a);
// Outputing the roots
// if discriminant is negative, outputs real and imaginary values serparately for complex number

return 0;



}


//enter data
void input ( double &a, double &b, double &c )
{
	cout << " Welcome to the roots calculator, please enter the a, b, and c values to solve for the roots of your equation. " << endl;
	cout << " a = " << endl;
	cin  >> a;
	cout << " b = " << endl;
	cin  >> b;
	cout << " c = " << endl;
	cin  >> c;
}

//Calculating roots
void roots ( double &a, double &b, double &c, double &discrim, double &quad_pos, double &quad_neg, double &root )
{		
											
	discrim = b*b - 4*a*c ;
	quad_pos = (-b + sqrt ( fabs (b*b - 4*a*c ) ) ) / 2*a;
	quad_neg =  (-b - sqrt ( fabs (b*b - 4*a*c ) ) ) / 2*a;
	root = -b / 2*a ;
}

//Output function
void quad ( double &discrim, double &quad_pos, double &quad_neg, double &root, double a)
{
	
	if ( discrim < 0 )
	{
		
		cout << "The roots are: " << endl;
		cout << root << " + i" << sqrt(fabs(discrim)) / 2*a<< endl;
		cout << root << " - i" << sqrt(fabs(discrim))/ 2*a;
	}
	
	else
	{
		cout << "The roots are: " << endl;
		cout << quad_pos << endl;
		cout << quad_neg << endl;
	}
}





