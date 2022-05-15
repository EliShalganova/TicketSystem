#ifndef __PERFORMANCE_HPP
#define __PERFORMANCE_HPP
#include "string.hpp"
#include "hall.hpp"
#include "date.hpp"
#include <fstream>

class Performance{

 String name;
 Hall hall;
 Date date;

public:
 Performance();
 Performance(String& name, Hall hall, Date date);

 String getName() const {return name;}
 Hall getHall() const {return hall;}
 Date getDate() const {return date; }


};

std::ostream& operator<<(std::ostream& os, Performance const&);

#endif