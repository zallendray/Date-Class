// Date Class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
    Date d, d2;
    
    int month, day, year, number_of_days;

    cin >> d;

    cout << endl << "Entered date:" << endl;
    d.print_date();


    //Date Class With Operator Overloading Tests
    cout << endl << endl << "The date you entered will be assigned to a new object and moved forward one day using a prefix operator." << endl <<  "The two dates should match." << endl << endl << "Date 1:" << endl;
    d2 = ++d;
    d.print_date();
    cout << endl << endl << "Date 2:" << endl;
    d2.print_date();

    cout << endl << "The new date will be moved forward one day using a postfix operator." << endl << "Date 1 should be one day in the future compared to Date 2." << endl << endl << "Date 1:" << endl;
    d2 = d++;
    d.print_date();
    cout << endl << endl << "Date 2:" << endl;
    d2.print_date();
    
    cout << endl << "Date 1 will be moved backward one day using a prefix operator." << endl << "The two dates should match." << endl << endl << "Date 1:" << endl;
    d2 = --d;
    d.print_date();
    cout << endl << endl << "Date 2:" << endl;
    d2.print_date();

    cout << endl << "Date 1 will be moved backward one day using a postfix operator." << endl << "Date 1 should be one day in the past compared to Date 2." << endl << endl << "Date 1:" << endl;
    d2 = d--;
    d.print_date();
    cout << endl << endl << "Date 2:" << endl;
    d2.print_date();



    cout << endl << endl << "You will be asked to enter two different dates, and the program will figure out how many days are between the two dates." << endl << endl;

    cout << "Date 1:" << endl;
    cin >> d;

    cout << "Date 2:" << endl;
    cin >> d2;


    cout << endl << endl << "CALCULATING... ";

    number_of_days = d - d2;

    cout << "There are " << number_of_days << " days between " << d << " and " << d2 << "." << endl << endl;
    
}