#ifndef __HALL_HPP
#define __HALL_HPP
#include <fstream>
#include <iostream>

class Hall
{
   unsigned id;
   unsigned rows;
   unsigned places;

   public:
   Hall(unsigned id = 0, unsigned rows = 1,unsigned places = 1);

   unsigned getId() const {return id;}
   unsigned getRows() const {return rows;}
   unsigned getPlaces() const {return places;}


   friend std::istream& operator>>(std::istream& is, Hall&);


};

std::ostream& operator<<(std::ostream& os, Hall const&);

#endif