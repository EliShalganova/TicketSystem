#ifndef __CINEMA_HPP
#define __CINEMA_HPP
#include "performance.hpp"
#include "tickets.hpp"

class Cinema{

     Performance performances[100];
     int performanceSize;

     Tickets tickets[300];
     int ticketSize;

     public:
     Cinema();

     int getPerformanceSize() const {return performanceSize;}
     int getTicketSize() const {return ticketSize;}

     bool AddEvent(Performance&);
     bool IsFreeHall(Performance);
     int FreePlaces(Performance);
     void AddTicket(Tickets&);
     void ReserveTicket(Tickets&);
     void CancelReservation(Tickets&);
     bool Booking(Tickets&, String );
};


#endif