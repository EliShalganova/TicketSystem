#ifndef __DATE_HPP
#define __DATE_HPP
#include <fstream>

class Date{

int day;
int month;
int year;

public:
Date(int day = 1, int month = 1, int year = 2022);

int getDay() const {return day;}
int getMonth() const {return month;}
int getYear() const {return year;}

bool ValidateDate();


};

std::ostream& operator<<(std::ostream& os, Date const&);
#endif