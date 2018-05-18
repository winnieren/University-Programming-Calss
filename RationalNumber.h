//**********************************************
//	Student Name: Winnie Rui Jia Ren
//	Student Number: 20703958
//	SYDE 121	Lab:9	 Assignment:2
//	
//	Filename:	lab0902
// 	Date submitted: Nov.30, 2017
//	
//	I hereby declare that this code, submitted
//	for credit for the course SYDE121, is a product
// 	of my own efforts. This coded solution has
//	not been plagiarized from other sources and
//	as not been knowingly plagiarized by others.
//***********************************************
#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <iomanip>
using namespace std;

class RationalNumber
{
	public:
		//constructor
		RationalNumber ();
		RationalNumber (int num, int den);
		friend RationalNumber operator+(const RationalNumber& c, const RationalNumber& d);
		friend RationalNumber operator-(const RationalNumber& c, const RationalNumber& d);
		friend RationalNumber operator*(const RationalNumber& c, const RationalNumber& d);
		friend RationalNumber operator/(const RationalNumber& c, const RationalNumber& d);
		friend bool operator>(const RationalNumber c, const RationalNumber d);
		friend bool operator<(const RationalNumber c, const RationalNumber d);
		friend bool operator>=(const RationalNumber c, const RationalNumber d);
		friend bool operator<=(const RationalNumber c, const RationalNumber d);
		friend bool operator==(const RationalNumber c, const RationalNumber d);
		friend bool operator!=(const RationalNumber c, const RationalNumber d); 
		friend istream& operator >>(istream &in, RationalNumber &a);
		friend ostream& operator<<(ostream &out, const RationalNumber a);
		
		void printRationalNumber ();
		void printRationalNumberAsFloating();

		//enables object of this class to be initialized when it is declared
		//contain default values if no initializer
		//stores fraction in reduced form
		
	private:
		int num;
	 	int den;
		void reducer ();
};

#endif
