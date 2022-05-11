#ifndef __PERFORMANCE_HPP
#define __PERFORMANCE_HPP
#include "string.hpp"
#include "hall.hpp"

class Performance{

 String name;
 Hall hall;
 int day, month, year;

public:
 Performance();
 Performance(String& name, Hall hall, int day = 1, int month = 1, int year = 2022);

 String getName() const {return name;}
 Hall getHall() const {return hall;}
 int getDay() const {return day;}
 int getMonth() const {return month;}
 int getYear() const {return year;}


};



#endif