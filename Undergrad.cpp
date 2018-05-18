#include <iostream>
#include <fstream>
#include <cstdlib>
#include "Undergrad.h"
using namespace std;

//Default constructor
Undergrad::Undergrad ()
{
	double grades [NUM_COURSES];
	for (int i = NUM_COURSES; i > 0 ; i --)
	{
		grades [i] = 0;
	}
	status Status = UNDECIDED; 
}

//Constructor with argument for current year and term
Undergrad::Undergrad ( const int newyear, const char newterm) : year (newyear) , term (newterm) 
{
	enter_grades();
	determine_status();
}

//Constructor with argument for current year and term, Student and Person
Undergrad::Undergrad ( const string &newname, const int newid, const int newgradyear, int newyear, char newterm) : 
					Student( newname, newid, newgradyear ), year (newyear), term (newterm)
{
	enter_grades();
	determine_status();
	
}

//Constructor with arguments for itself, Student, Person, and dateofbirth
Undergrad::Undergrad(const string &newname, const int newid, const int newgradyear, const int birthday,
					 const int birthmonth, const int birthyear, const int newyear, const char newterm ) :
	Student(newname, newid, newgradyear, birthday, birthmonth, birthyear), year(newyear), term(newterm)
{
	enter_grades();
	determine_status();
}

//Default Destructor
Undergrad:: ~Undergrad()
{

}

void Undergrad::enter_grades ()
{
	cout<<"Please enter the grades for course: " << endl;
	for ( int i = 0; i < NUM_COURSES; i++)
	{
			cin >> grades [i];
			cout << "grade added was" << grades [i] << endl;
	}
	cout << "exited for loop";

}

void Undergrad::print ()
{
	cout << "entered Print function";
	Student::print();
	cout << "Year: " << year << endl;
	cout << "Term: " << term << endl;
	//get_status ();
	//print_grades ();
}


void Undergrad::print_grades ()
{
	for ( int i = 0; i < NUM_COURSES; i++ )
	cout << grades [i];
} 


void Undergrad::determine_status ()
{
	const int PASSMARK = 50;
	double grades_avg = 0;
	double sum = 0;
	for (int i = 0; i < NUM_COURSES; i ++)
	{
		sum = sum + grades [i];
	}
	grades_avg = sum/NUM_COURSES;
	if ( grades_avg >= PASSMARK)
	{
		status Status = PASS;
	}
	else
		status Status = FAIL;
	
}

string Undergrad::get_status ()
{
	status Status = UNDECIDED;
	cout << "The status of the student is currently: ";
	switch (Status)
	{
		case PASS:
			return "PASS";
		
		case FAIL:
			return "FAIL";
		
		default:
			return "UNDECIDED";
	}

}

//get term - return term
char Undergrad::get_term ()
{
	return term;
}

//ask user for current term of students
void Undergrad::set_term ()
{
	cout << "what is the current term of the student? (A or B?)";
	cin >> term;
	
}

//get current year - return current year
int Undergrad::get_year()
{
	return year;
}

//set current year - ask for current year of student
void Undergrad::set_year ()
{
	cout << "what is the current year of the student? (1, 2, 3, or 4)";
	cin >> year;
}


int Undergrad::age_at_convocation ()
{
	int age = 0;
	//get_dateofbirth();//.get_month;
	//get_gradyear();
	if (get_dateofbirth().get_month () <= 5)
	{
		if (get_dateofbirth().get_day() <= 15)
		{
			int age = get_gradyear() - get_dateofbirth().get_year();
		}
	}
	else
	int age = Student::get_gradyear() - (get_dateofbirth().get_year() + 1);
	return age;

}
