//**********************************************
//	Student Name: Winnie Rui Jia Ren
//	Student Number: 20703958
//	SYDE 121	Lab:10	 Assignment:02
//	
//	Filename:	lab0701
// 	Date submitted: Dec.1, 2017
//	
//	I hereby declare that this code, submitted
//	for credit for the course SYDE121, is a product
// 	of my own efforts. This coded solution has
//	not been plagiarized from other sources and
//	as not been knowingly plagiarized by others.
//
// Program runs partially, sorry needed to study for the final. 
//***********************************************

#ifndef UNDERGRAD_H
#define UNDERGRAD_H
#include "student.h"
#include <iostream>

const int NUM_COURSES = 5;
class Undergrad: public Student
{
	
	public: 
		//default constructor
		Undergrad ();
		// constructor with arguments for current year and term
		Undergrad (int newyear, char newterm);
		// constructor with arguments for current year and term, student and person
		Undergrad (const string &newname, const int newid, const int newgradyear, int newyear, char newterm);
		// constructor with argument for current year and term, student, person, and birthday
		Undergrad (const string &newname, const int newid, const int newgradyear, const int birthday,
					 const int birthmonth, const int birthyear, const int newyear, const char newterm );
		
		//Default destructor
		~Undergrad ();
		
		//Ask user to enter grades
		void enter_grades(); 
		//Output grades for user
		void print_grades ();
		//print all data associated with undergrad
		void print ();
		//Determine if student is passing or failing
		void determine_status ();
		//Return status
		string get_status ();
		//get/set current year/term 
		char get_term ();
		void set_term ();
		int get_year();
		void set_year ();
		//age at convocation (w/o regard to failing term)
		int age_at_convocation ();
					 
					 
	private:
		double grades [NUM_COURSES];
		enum status
		{
			PASS,
			FAIL,
			UNDECIDED,
		};
		int year;
		char term; 
		
};

#endif
