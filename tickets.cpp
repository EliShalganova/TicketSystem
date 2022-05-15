#include "tickets.hpp"
#include <iostream>
#include "performance.hpp"
#include "string.hpp"

Tickets::Tickets()
{}

Tickets::Tickets(Performance& performance, String& password, int row , int place )
{
   this->performance = performance;
   this->password = password;
   this->row = row;
   this->place = place;
   String status("available"); 

}