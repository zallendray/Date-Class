#include "Date.h"
#include <string>
#include <iostream>

Date::Date(int m, int d, int y)
{
	Date::month = m;
	Date::day = d;
	Date::year = y;
}

void Date::set_date(int m, int d, int y)
{
	if (m > 0 and m < 13) {
		Date::month = m;
	}
	else {
		m = Date::month;
	}

	if ((d < Date::last_day(m,y) or d == Date::last_day(m,y)) and d> 0) {
		Date::day = d;
	}
	else {
		d = Date::day;
	}
	Date::year = y;
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


//bool Date::is_leap_year() const;
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
int Date::last_day(int month, int year) const
{
	if (month == 2) {
		if (Date::is_leap_year(year))
		{
			return 29;
		}
		else {
			return 28;
		}
	}
	else if (month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12) {
		return 31;
	}
	else {
		return 30;
	}
}


void Date::print_date()
{
	std::string month_string;
	std::cout << Date::get_month() << "/" << Date::get_day() << "/" << Date::get_year() << std::endl;

	switch (Date::get_month()) {
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

	std::cout << month_string << " " << Date::get_day() << ", " << Date::get_year() << std::endl;

	std::cout << Date::get_day() << " " << month_string << " " << Date::get_year() << std::endl;
}