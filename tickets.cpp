#include "tickets.hpp"
#include <iostream>
#include "performance.hpp"
#include "string.hpp"


Tickets::Tickets(Performance& performance, String& password, int row , int place )
{
   this->performance = performance;
   this->password = password;
   this->row = row;
   this->place = place;
   MyString status("available"); 

}