#ifndef __DATE_HPP
#define __DATE_HPP

class Date{

int day;
int month;
int year;

public:
Date(int day = 1, int month = 1, int year = 1);

int getDay() const {return day;}
int getMonth() const {return month;}
int getYear() const {return year;}

bool ValidateDate();


};


#endif