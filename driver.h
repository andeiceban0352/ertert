#pragma once;

class Taxi_Driver:public Person
{
public:
    int salary;
    int age;
    string IDNP;

    Taxi_Driver(string t_name, string t_forename, string t_phone_number, int t_age, string t_IDNP)
    {
    	name = t_name;
        forename = t_forename;
        phone_number = t_phone_number;
        age = t_age;
        IDNP = t_IDNP;
    }

    void drive()
    {
    	cout << "Hello, it's " << forename << " I will get this ride !" << endl; 
    }

    float rank(float value) override{
       rank_val = value - 0;
       return rank_val;
    };

    void info() override{
        cout << "The driver is the person who takes the client from point A to point B safely and comfortably !" << endl;
    }
};