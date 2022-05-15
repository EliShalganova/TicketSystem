#include <iostream>
#include <fstream>
#include "hall.hpp"
#include "date.hpp"
#include "cinema.hpp"
#include "performance.hpp"
#include "string.hpp"
#include "tickets.hpp"

int main()
{
  // example 1
  /*String name("Hello");
  Hall hall(1,5,10);
  Date date(1,5,2023);
  date.ValidateDate();
  Performance performance(name,hall,date);

  Cinema cinema;
 bool added =  cinema.AddEvent(performance);

 if(added)
 {
   std::ofstream of("performance.txt");
   of << performance;
 }
  added =  cinema.AddEvent(performance);
  if(added)
 {
   std::ofstream of("performance.txt");
   of << performance;
 }*/

    //example 2)
 /*String name("Hamlet");
 Hall hall(2,20,15);
 Date date(12,6,2024);
 date.ValidateDate();
 Performance performance(name, hall, date);

 String password("hello");
 Tickets ticket(performance,password, 1,5);
 

 String name2("Iliada");
 Hall hall2(3,25,16);
 Date date2(4,8,2025);
 Performance performance2(name2, hall2, date2);

 String password2("pass");
 Tickets ticket2(performance2,password2,2,6);


 Cinema cinema;
 ticket.setStatus("available");
 ticket2.setStatus("available");
 cinema.AddTicket(ticket);
 cinema.AddTicket(ticket2);


 std:: ofstream of("else2.txt");
 int free = cinema.FreePlaces(performance);
 of << "The number of free places is: ";
 of << free ;

  // example 3)

 /*String name_3("Hamlet");
 Hall hall_3(2,20,15);
 Date date_3(12,6,2024);
 date.ValidateDate();
 Performance performance_3(name_3, hall_3, date_3);

 String password_3("hello");
 Tickets ticket_3(performance_3,password_3, 1,5);

 Cinema cinema;
 cinema.ReserveTicket(ticket_3);
 cinema.CancelReservation(ticket_3);*/

  //example 4)

  /*String name_4("Welcome");
  Hall hall_4(4,15,11);
  Date date_4(3,9,2023);
  date.ValidateDate();
  Performance performance_4(name_4,hall_4,date_4);

  String password_4("weare");
  Tickets ticket_4(performance_4,password_4,3,7);

  String password("wear");

  Cinema cinema;
  ticket_4.setStatus("available");
 bool sold =  cinema.Booking(ticket_4, password);
 std::cout << sold << std::endl;


  ticket_4.setStatus("reserved");
  sold =  cinema.Booking(ticket_4, password);
  std::cout << sold << std::endl;*/

    return 0;
}