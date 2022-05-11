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

void Performance::NewEvent()
{
    int day, month, year;
    do
    {
        std::cout << "Enter a day: " << std::endl;
        std::cin >> day ;
        std::cout << "Enter a month: " << std::endl;
        std::cin >> month;
        std::cout << "Enter a year: " << std::endl;
        std::cin >> year;
    } while (day <= 0 || day > 31 || month<=0 || month > 12);

    
    
}