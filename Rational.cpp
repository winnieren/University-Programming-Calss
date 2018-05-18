#include "RationalNumber.h"
#include <iostream>

//default constructor
RationalNumber::RationalNumber ()
{
	num = 0;
	den = 1;
	
}

//Overload constructor
RationalNumber::RationalNumber (const int n, const int d)
{
	num = n;
	if (d == 0)
	{
	cout << "Error, setting denominator to 1";
		den = 1;
	}
	else 
	den = d;
	
}

void RationalNumber::reducer ()
{
int gcd = 0;	
 
	for(int i =  abs(num*den) ;i > 1;i--)
	{
		if(num%i==0 && den%i == 0 )
		{			
			num = num/i;
			den = den/i;
		}
		
	}			

}




RationalNumber operator+(const RationalNumber& c, const RationalNumber& d)
		{
			RationalNumber a;
			a.den = d.den*c.den;
			a.num = (d.num*c.den) + (c.num*d.den);
			a.reducer ();
				
			return a;
		}
		
RationalNumber operator-(const RationalNumber& c, const RationalNumber& d)
		{
			RationalNumber a;
			a.den = c.den*d.den;
			a.num =  (c.num*d.den) - (d.num*c.den); 
			a.reducer ();
				
			return a;
		}
		
RationalNumber operator*(const RationalNumber &c, const RationalNumber &d)
		{
			RationalNumber a;
			a.den = c.den*d.den;
			a.num = c.num*d.num;
			a.reducer ();
				
			return a;
		}
		
RationalNumber operator /(const RationalNumber &c, const RationalNumber &d)
		{
			RationalNumber a;
			a.num = c.den*d.num;
			a.den = c.num*d.den;
			a.reducer ();
				
			return a;
		}
		

bool operator >(const RationalNumber c, const RationalNumber d) 
{
	double a;
	double b;
	a = double (c.num) /c.den; 
	b = double (d.num) /d.den;
	if (a > b)
		return true;
	else
		return false;
}

bool operator <(const RationalNumber c, const RationalNumber d)
{
	double a;
	double b;
	a = double (c.num) /c.den; 
	b = double (d.num) /d.den;
	if (a < b)
		return true;
	else
		return false;
}

bool operator >=(const RationalNumber c, const RationalNumber d)
{
	double a;
	double b;
	a = double (c.num) /c.den; 
	b = double (d.num) /d.den;
	if (a >= b)
		return true;
	else
		return false;
}

bool operator <=(const RationalNumber c, const RationalNumber d)
{
	double a;
	double b;
	a = double (c.num) /c.den; 
	b = double (d.num )/d.den;
	if (a <= b)
		return true;
	else
		return false;
}

bool operator ==(const RationalNumber c, const RationalNumber d)
{
	double a;
	double b;
	a = double (c.num) /c.den; 
	b = double (d.num) /d.den;
	if (a == b)
		return true;
	else
		return false;
} 

bool operator !=(const RationalNumber c, const RationalNumber d)
{
	double a;
	double b;
	a = double (c.num)/c.den; 
	b = double (d.num) /d.den;
	if (a != b)
		return true;
	else
		return false;	
} 

istream& operator >>(istream& in, RationalNumber &a)
{
	in >> a.num;
	in >> a.den;
	return in;
}

ostream& operator<<(ostream &out, const RationalNumber a)
{
	out << a.num << "/" << a.den;
	return out;
}

void RationalNumber::printRationalNumber ()
		{
		cout << num << "/" << den; 	
		}
		
void RationalNumber::printRationalNumberAsFloating()
		{
			double numerator = num;
			double denom = den;
		cout << numerator/denom;
		}
