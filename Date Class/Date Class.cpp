// Date Class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
    Date d, d2;
    
    int month, day, year;

    cout << "Please enter the year: ";
    cin >> year;
    cout << endl << "Please enter the month: ";
    cin >> month;
    cout << endl << "Please enter the day: ";
    cin >> day;
    cout << endl << endl;
    d.set_date(month, day, year);

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
}