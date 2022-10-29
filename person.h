#pragma once;

class Person:Taxi_Company
{
public:
    string name;
    string forename;
    string phone_number;
    float rank_val;

    virtual float rank(float value) = 0;

};
