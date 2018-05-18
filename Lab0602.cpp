//**********************************************
//	Student Name: Winnie Rui Jia Ren
//	Student Number: 20703958
//	SYDE 121	Lab:6	 Assignment:2
//	
//	Filename:	lab0602 
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

const double pi = acos(-1);
void input (double &a, double &b, double &c);
void check (double &a,double &b, double &c);
double calc ( double &a, double &b, double &c, double &angle, double &angle_deg);

int main ()
{
	
double a = 0;
double b = 0;
double c= 0;
double angle = 0;
double angle_deg = 0;

	input (a, b, c);
	check (a, b, c);
	calc (a, b, c, angle, angle_deg);
	if ( a > 0 && b >  0 && c > 0 && angle_deg > 0)
	{		
	cout << " The angle of your triangle is: " << angle_deg;
	}
}

void input (double &a, double &b, double &c)
{
	cout <<  " Welcome to the triangle angle calculator, please enter the dimensions of each side of you triangle." << endl;
	cout << " Please make sure side c is opposite to the angle you would like to calculate" << endl;
	cout << "a = " << endl;
	cin  >> a;
	cout << "b = " << endl;
	cin  >> b;
	cout << "c = " << endl;
	cin  >> c;
	
}

void check (double &a,double &b,double &c)
{
	if ( a > 0 && b >  0 && c > 0)
	{
		if (a < b + c && b < a + c && c < a + b)
		{
		a = a;
		b = b;
		c = c;
		}
		else
		{
			cout << "error, please make sure your dimensions are proper!" ;
		}
	}
	else 
	{
		cout << "error, please make sure your dimensions are postive values.";
	}
}

double calc ( double &a, double &b, double &c, double &angle, double &angle_deg)
{
	angle = acos( ((a*a) + (b*b) - (c*c))/(2*a*b));
	angle_deg = angle * (180.0/pi);
	return angle_deg;
}

