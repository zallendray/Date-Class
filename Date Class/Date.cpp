#include "Date.h"
#include <string>
#include <iostream>

Date::Date(int m, int d, int y)
{
	Date::month = m;
	Date::day = d;
	Date::year = y;
}

void set_date(int m, int d, int y)
{

}



int Date::get_month() const
{
	return Date::month;
}

int Date::get_day() const
{
	return Date::day;
}

int Date::get_year() const
{
	return Date::year;
}


//bool is_leap_year() const;

bool Date::is_leap_year(int year) const
{
	if (year % 400 == 0) {
		return true;
	}
	else if (year % 100 == 0) {
		return false;
	}
	else if (year % 4 == 0) {
		return true;
	}
	else {
		return false;
	}
}

//int last_day() const;
//int last_day(int month, int year) const;


void Date::print_date()
{
	std::string month_string;
	Date d;
	std::cout << d.get_month() << "/" << d.get_day() << "/" << d.get_year() << std::endl;

	switch (d.get_month()) {
		case 1:
			month_string = "January";
			break;
		case 2:
			month_string = "February";
			break;
		case 3:
			month_string = "March";
			break;
		case 4:
			month_string = "April";
			break;
		case 5:
			month_string = "May";
			break;
		case 6:
			month_string = "June";
			break;
		case 7:
			month_string = "July";
			break;
		case 8:
			month_string = "August";
			break;
		case 9:
			month_string = "September";
			break;
		case 10:
			month_string = "October";
			break;
		case 11:
			month_string = "November";
			break;
		case 12:
			month_string = "December";
			break;
	}

	std::cout << month_string << " " << d.get_day() << ", " << d.get_year() << std::endl;

	std::cout << d.get_day() << " " << month_string << " " << d.get_year() << std::endl;
}