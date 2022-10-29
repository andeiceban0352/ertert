#pragma once;


// car will be the parent class for the other cars
class Car:Taxi_Company
{
public:
    string name;
    string model;
    string transmission;
    string fuel_type;
    int power;
    int max_speed;
    string vin;

    Car(string c_name, string c_model, string c_transmission, string c_fuel_type, int c_power, int c_max_speed, string c_vin)
    {
    	name = c_name;
        model = c_model;
        transmission = c_transmission;
        fuel_type = c_fuel_type;
        power = c_power;
        max_speed = c_max_speed;
        vin = c_vin;
    }

    void car_specs()
    {
        if(power > 250){
            cout << "Which is a sport car !" << endl;
        }else{
            cout << "Which is a regular car !" << endl;
        }
    }

    void info() override{
        cout << "Car is the main transport through which our customers are served !" << endl;
    }
};