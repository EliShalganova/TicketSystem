#include "date.hpp"
#include <iostream>


Date::Date(int day, int month, int year)
{
    this->day = day;
    this->month = month;
    this->year = year;
}

bool Date::ValidateDate()
{
    bool isValid;
    if(year >= 2022 && year <= 4022)
    {
        if((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (day > 0 && day<=31))
              isValid = true;
        else if((month == 4 || month == 6 || month == 9 || month == 11) && (day > 0 && day <= 30))
              isValid = true;
        else if(month == 2)
        {
            if((year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)) && (day > 0 && day <= 29))
              isValid = true;
            else if(day > 0 && day <= 28)
              isValid = true;
            else
              isValid = false;
        }
        else
        isValid = false;
    }
    return isValid;
}
