#include <iostream>
#include "cinema.hpp"
#include "performance.hpp"
#include <cstring>
#include "hall.hpp"
#include <cassert>

Cinema::Cinema()
{
    performanceSize = 0;
    ticketSize = 0;
}



bool Cinema::IsFreeHall(Performance performance)
{

    int hall_id = performance.getHall().getId();
    int day = performance.getDate().getDay();
    int month = performance.getDate().getMonth();
    int year = performance.getDate().getYear();
    bool is_free = true;
    for(int i=0; i<performanceSize && is_free != false; i++)
    {
       if(performances[i].getHall().getId() == hall_id)
       {
           if(performances[i].getDate().getDay() == day && performances[i].getDate().getMonth() == month && performances[i].getDate().getYear() == year)
           {
               is_free = false;
           }
       }
    }
    return is_free;
}

void Cinema::AddEvent(Performance& performance)
{
    bool is_free_hall = IsFreeHall(performance);
    if(is_free_hall)
    {
        performances[performanceSize++] = performance;
    }else{
         std::clog << "There is already another performance in this hall on the same date!";
    }

}

int Cinema::FreePlaces(Performance performance)
{
    String name = performance.getName();
    int count = 0;
    for(int i = 0; i < ticketSize; i++)
    {

     if( tickets[i].getPerformance().getName() == name)
     {
         if(tickets[i].getStatus() == "available")
         {
             count++;
         }
     }
    }
    return count;
}

void Cinema::AddTicket(Tickets& ticket)
{

       if(ticketSize < 300)
       {
          tickets[ticketSize++] = ticket;
       }

}

void Cinema::ReserveTicket(Tickets& ticket)
{
    ticket.setStatus("reserved");
}

void Cinema::CancelReservation(Tickets& ticket)
{
    ticket.setStatus("available");
}

bool Cinema::Booking(Tickets& ticket, String password)
{
    bool isBooked = false;
    if(ticket.getStatus() == "available")
    {
        ticket.setStatus("sold");
        isBooked = true;
    }else if (ticket.getStatus() == "reserved")
    {
       if( ticket.getPassword() == password)
       {
           ticket.setStatus("sold");
           isBooked = true;
       }
    }
    return isBooked;
    
}