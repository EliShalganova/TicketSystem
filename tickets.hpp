#ifndef __TICKETS_HPP
#define __TICKETS_HPP
#include "performance.hpp"
#include "string.hpp"

class Tickets{

Performance performance;
int row;
int place;
String password;

public:
Tickets();
Tickets(Performance& performance, String& password, int row = 1, int place = 1);

Performance getPerformance() const {return performance;}
int getRow() const {return row;}
int getPlace() const {return place;}
String getPassword() const {return password;}

String status;
String getStatus() const {return status;}
String setStatus( String status) { return this->status = status;}

};

#endif