#include "iostream"
#include "string"
#include "operator.h"
#include "booking.h"
#include "ride_type.h"
#include "taxy_company.h"
#include "person.h"
#include "economy_management.h"
#include "driver.h"
#include "customer.h"
#include "car.h"
#include "admin.h"
#include "cstdlib"

using namespace std;

int main()
{
    float income_monthly = 0;
    float income_daily = 0;
    float tom_income = 0;
    float tom_income_total = 0;
    string ride_type = "standart";


    Customer customer_x("Erikow", "Tom", "065487947");
    Operator operator_x("Rewot", "Emma", "064879245", 31, "0123456789123");
    Booking boking_x("15:30", "15:45", "Riscani", "Centru","standart");
    Car car_x("BMW", "M 3" , "Automate", "benzine", 349, 300, "4Y1SL65848Z411439");
    Taxi_Driver driver_x("Wetsib", "Jim","069748167", 24, "7894561230124");
    Payment payment_x("card");
    Admin admin_x("Bdirs", "Rocko", "0788495134", 39, "4871354871545");
    Salary salary_x;
    Income income_x;
    Rating rating_x;

    Standart Stand;
    Premium Prem;
    
    // Set the time and distance, override both functions 
    Stand.setDistance(6);
    Stand.setTime(15);
    Prem.setDistance(6);
    Prem.setTime(15);   

    customer_x.customer_request();
    operator_x.get_the_request();

    boking_x.booking();
    tom_income = Stand.ride_price();
    income_daily = income_daily + Stand.ride_price();
    tom_income_total = income_x.calculate_income(tom_income);

    cout << " - Go from " << boking_x.current_destination << " at " << boking_x.starting_time << " to " << boking_x.destination << " at " << boking_x.arrival_time << endl ;    
    driver_x.drive();

    cout << " - I will go with our new " << car_x.name << " " << car_x.model << endl ;
    
    car_x.car_specs();
    int rand_rating = (rand() % 10) + 8; 
    string rand = to_string(rand_rating);
    rating_x.ride_rating(rand);

    cout << "Done !, I finished the ride !" << endl;

    if(boking_x.ride_type == "standart"){
        cout << "It is a standart ride and the price will be " << Stand.ride_price() << " lei !" << endl;
        Stand.comfort_type();
    }else {
        cout << "It is a premium ride and the price will be " << Prem.ride_price() << " lei !"<< endl;
        Prem.comfort_type();
    }

    payment_x.payment_details();

    admin_x.manage_company();

    admin_x.manage_salary(income_daily);
    salary_x.return_income(income_daily);

    cout << "The salary for " << customer_x.forename << " at the moment is " << salary_x.calculate_salary(tom_income - (tom_income*0.5)) << " lei. ";

    cout << " \n" <<  endl;

    cout << "Here are the ranking system of each Person from Company : " << endl;
    cout << "The Driver has : " << driver_x.rank(4)<< endl;
    cout << "The Customer has : " << customer_x.rank(4)<< endl;
    cout << "The Operator has : " << operator_x.rank(4)<< endl;
    cout << "The Admin has : " << admin_x.rank(4)<< endl;

    cout << endl;

    customer_x.info();
    operator_x.info();
    boking_x.info();
    car_x.info();
    driver_x.info();
    payment_x.info();
    admin_x.info();
    salary_x.info();
    income_x.info();
    rating_x.info();


    return 0;
}
