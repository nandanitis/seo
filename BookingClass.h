/**
 * Project Untitled
 */


#ifndef _BOOKINGCLASS_H
#define _BOOKINGCLASS_H

class BookingClass {
public: 
    int booking_id;
    string booking_title;
    string booking_description;
    string booking_type;
    date booking_date;
    
void addBooking();
    
void editBooking();
    
void deleteBooking();
    
void searchBooking();
};

#endif //_BOOKINGCLASS_H