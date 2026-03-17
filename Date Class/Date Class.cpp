// Date Class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
    Date d;
    
    int month, day, year;

    cout << "Please enter the year: ";
    cin >> year;
    cout << endl << "Please enter the month: ";
    cin >> month;
    cout << endl << "Please enter the day: ";
    cin >> day;
    cout << endl << endl;
    d.set_date(month, day, year);

    d.print_date();
}