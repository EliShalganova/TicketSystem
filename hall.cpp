#include <iostream>
#include "hall.hpp"


Hall::Hall(unsigned _id , unsigned _rows ,unsigned _places ) : id(_id), rows(_rows), places(_places)
{}

std::istream& operator>>(std::istream& is, Hall& hall)
{
    return is >> hall.id >> hall.rows >> hall.places;
}

std::ostream& operator<<(std::ostream& os, Hall const& hall)
{
    return os << hall.getId() << " " << hall.getRows() << " " << hall.getPlaces() << std::endl;
}


int main()
{

  std::ofstream output{
      "file.txt"
  };

  output << 01 << " " << 5 << " " <<  10 ;
  output << std::endl;
  output << 02 << " " << 20 << " " << 15;
  output << std::endl;
  output << 03 << " " << 25 << " " << 16;
  output << std::endl;
  output << 04 << " " << 15 << " " << 11;

    return 0;
}