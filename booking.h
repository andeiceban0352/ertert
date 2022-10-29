#pragma once;

using namespace std;
class Booking:public Taxi_Company
{
public:
    string starting_time;
    string arrival_time;
    string current_destination;
    string destination;
    string ride_type;

    Booking(string b_starting_time, string b_arrival_time, string b_current_destination, string b_destination, string b_ride_type)
    {
    	starting_time = b_starting_time;
        arrival_time = b_arrival_time;
        current_destination = b_current_destination;
        destination = b_destination;
        ride_type = b_ride_type;
    }

    void booking()
    {
    	cout << "The customer wants : " << endl; 
    }

    void info() override{
        cout << "Booking is the process in which the operator takes all the data from the client and makes a reservation !" << endl; 
    }
};