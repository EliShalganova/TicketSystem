#include "performance.hpp"
#include <iostream>



Performance::Performance(String& name, Hall hall, int day , int month, int year ) 
{
    this->name = name;
    this->hall = hall;
    this->day = day;
    this->month = month;
    this->year = year;
}


