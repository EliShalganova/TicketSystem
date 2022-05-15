#include <iostream>
#include "hall.hpp"


Hall::Hall(unsigned id , unsigned rows ,unsigned places )
{
    this->id = id;
    this->rows = rows;
    this->places = places;
}

std::istream& operator>>(std::istream& is, Hall& hall)
{
    return is >> hall.id >> hall.rows >> hall.places;
}

std::ostream& operator<<(std::ostream& os, Hall const& hall)
{
    return os << hall.getId() << " " << hall.getRows() << " " << hall.getPlaces() << std::endl;
}


int main_1()
{

  std::ofstream output{
      "file.txt"
  };

  output << 1 << " " << 5 << " " <<  10 ;
  output << std::endl;
  output << 2 << " " << 20 << " " << 15;
  output << std::endl;
  output << 3 << " " << 25 << " " << 16;
  output << std::endl;
  output << 4 << " " << 15 << " " << 11;

    return 0;
}