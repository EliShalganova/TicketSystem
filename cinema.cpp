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
    int day = performance.getDay();
    int month = performance.getMonth();
    int year = performance.getYear();
    bool is_free = true;
    for(int i=0; i<performanceSize && is_free != false; i++)
    {
       if(performances[i].getHall().getId() == hall_id)
       {
           if(performances[i].getDay() == day && performances[i].getMonth() == month && performances[i].getYear() == year)
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
    
    int count = 0;
    for(int i = 0; i < ticketSize; i++)
    {
      
    }
}