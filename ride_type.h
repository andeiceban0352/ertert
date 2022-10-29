#pragma once;

class Ride_Type:public Taxi_Company{
public:
    float start_ride;
    float cost_per_km;
    float cost_per_min;
    float price;
    float distance;
    float time;

    virtual float ride_price() = 0;

    virtual void comfort_type(){
        //
    }

    void setTime(float x) {
        time = x;
    }

    void setDistance(float x){
        distance = x;
    }
};

class Standart:public Ride_Type{
public:
    float start_ride = 29;
    float cost_per_km = 5.5;
    float cost_per_min = 0.38;

    float ride_price() override{
        price = start_ride + (cost_per_km * distance) + (cost_per_min * time);
        return price;
    }

    void comfort_type() override{
        cout << "This Ride will be confortable !!" << endl;
    }

};

class Premium:public Ride_Type{
public:
    float start_ride = 70;
    float cost_per_km = 10.5;
    float cost_per_min = 1;
    
    float ride_price() override{
        price = start_ride + (cost_per_km * distance) + (cost_per_min * time);
        return price;
    }

    void comfort_type() override{
        cout << "This Ride will be the most confortable ever you had !!" << endl;
    }
};