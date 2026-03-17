#pragma once


class Date
{
private:
	int month = 1, day = 1, year = 1900;

public:
	Date(int m, int d, int y);
	void set_date(int m, int d, int y);
	
	int get_month() const;
	int get_day() const;
	int get_year() const;
};

Date::Date(int m = 1, int d = 1, int y = 1900)
{

}