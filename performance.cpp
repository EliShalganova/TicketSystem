#include "performance.hpp"
#include <iostream>



Performance::Performance(String& name, Hall hall, Date date) 
{
    this->name = name;
    this->hall = hall;
    this->date = date;
}

std::ostream& operator<<(std::ostream& os, Performance const& performance)
{
    return os << performance.getName() << " " << performance.getHall() << " " << performance.getDate() << std::endl;
}


