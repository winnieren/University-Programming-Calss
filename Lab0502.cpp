//**********************************************
//	Student Name: Winnie Rui Jia Ren
//	Student Number: 20703958
//	SYDE 121	Lab:5	 Assignment:2
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
#include <iomanip>
using namespace std;

int main (){

//declaring variables
int employee_type = 0;

int manager_num = 0;
double manager_salary = 0;
double manager_weeks = 0;
double all_manager_salary = 0;
double emp_manager_salary = 0;

int hour_worker_num = 0;
double hour_worker_work = 0;
double hour_worker_salary = 0;
double all_hour_worker_salary = 0;
double emp_hour_worker_salary = 0;

int comm_worker_num = 0;
double comm_worker_sale = 0;
double all_comm_worker_salary = 0;
double emp_comm_worker_salary = 0;

int piece_worker_num = 0;
double num_item = 0;
double price_item = 0;
double all_piece_salary = 0;
double emp_piece_salary = 0;

double overall_salary = 0;

// Asking type of worker

do{
cout << " Welcome to the salary calculator please enter information according to the following instructions.";
cout << " Please input:" << endl;
cout << " 0 for manager"  << endl;
cout << " 1 for hourly workers" << endl;
cout << " 2 for commisioned workers" << endl;
cout << " 3 for piece workers" << endl;
cout << " or -1 to display results" << endl;
cout << " Type of employee ";
cin  >> employee_type;

switch (employee_type)
{
	//Calculating Manager Salary
	case 0:
		{
			cout << "What is their weekly salary?" << endl;
			cin  >> manager_salary;
			cout << "How many weeks have they worked? " << endl;
			cin  >> manager_weeks;
			manager_num ++;
			
			emp_manager_salary = manager_weeks*manager_salary;
			all_manager_salary = all_manager_salary + emp_manager_salary;
		break;
		}
		
		
	//calculating hourly worker salary
	case 1:
		{
			cout << "How many hours have they worked?" << endl;
			cin  >> hour_worker_work;
			cout << "What is their hourly wage?" << endl;
			cin  >> hour_worker_salary;
			hour_worker_num ++;
			
			//making sure over 40 hours gets extra pay
			if (hour_worker_work <= 40 && hour_worker_work>=0)
			{
				emp_hour_worker_salary = hour_worker_work*hour_worker_salary;
				all_hour_worker_salary = all_hour_worker_salary + emp_hour_worker_salary;
			}
			else 
			{
				emp_hour_worker_salary = (hour_worker_work-40)*1.5*hour_worker_salary + 40*hour_worker_salary;
				all_hour_worker_salary = all_hour_worker_salary + emp_hour_worker_salary;
			}	
		break;	
		}
		
	
	//calculating commisioned worker salary
	case 2:
		{
			cout << "What was the commissioned worker's gross weekly sale'?" << endl;
			cin  >> comm_worker_sale;
			comm_worker_num ++;
			
			emp_comm_worker_salary = 250 + 0.057*(comm_worker_sale);
			all_comm_worker_salary = emp_comm_worker_salary + emp_comm_worker_salary;
		
		break;
		}
		
	
	//Calculating piece worker salary
	case 3:
		{
			cout << "How many items were sold?" << endl;
			cin  >> num_item;
			cout << "What is the price of the item sold?" << endl;
			cin  >> price_item;
			piece_worker_num ++;
			
			emp_piece_salary = num_item*price_item;
			all_piece_salary = all_piece_salary + emp_piece_salary;
		
		break;
		}
		
	case -1:
		//exit
	default:
		break;
}

}
while (employee_type != -1);

//Making a table
const char separator = ' ';
const int width = 20;

//first row
cout << left << setw(width) << setfill (separator) << " Position           |";
cout << left << setw(width) << setfill (separator) << " Total Number of Employees |";
cout << left << setw(width) << setfill (separator) << " Total Salary at Each Position |";
cout << left << setw(width) << setfill (separator) << " Overall Total Across All Position";
cout << endl;
// second row: Managers
cout << left << setw(width) << setfill (separator) << " Manager	    |";
cout << left << setw(width) << setfill (separator) << manager_num << "	|";
cout << left << setw(width) << setfill (separator) << all_manager_salary;
cout << endl;
//third row: Hourly Workers
cout << left << setw(width) << setfill (separator) << " Hourly Worker 	    |";
cout << left << setw(width) << setfill (separator) << hour_worker_num << "	|";
cout << left << setw(width) << setfill (separator) << all_hour_worker_salary;
cout << endl;
//fourth row: commissioned workers
cout << left << setw(width) << setfill (separator) << " Commissioned Worker|";
cout << left << setw(width) << setfill (separator) <<  comm_worker_num << "	|";
cout << left << setw(width) << setfill (separator) <<  all_comm_worker_salary;
cout << endl;
//fifth row: piece workers
cout << left << setw(width) << setfill (separator) << " Piece Workers      |";
cout << left << setw(width) << setfill (separator) << piece_worker_num << "	|";
cout << left << setw(width) << setfill (separator) << all_piece_salary;
cout << endl;
//last row: Overall total
overall_salary = all_manager_salary + all_hour_worker_salary+all_comm_worker_salary+all_piece_salary;
cout << left << setw(width) << setfill (separator) << " Overall Total Across All Positions";
cout << left << setw(width) << setfill (separator) << " 	";
cout << left << setw(width) << setfill (separator) << " 	";
cout << left << setw(width) << setfill (separator) << overall_salary;
return 0;
}

