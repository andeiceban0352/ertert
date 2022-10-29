#pragma once;

class Operator:public Person
{
public:

    int salary;
    int age;
    string IDNP;

    Operator(string o_name, string o_forename, string o_phone_number, int o_age, string o_IDNP)
    {
    	name = o_name;
        forename = o_forename;
        phone_number = o_phone_number;
        age = o_age;
        IDNP = o_IDNP;
    }

    void get_the_request()
    {
    	cout << "This is " << forename << " i just got a new request " << endl; 
    }

    float rank(float value) override{
        rank_val = value - 2;
        return rank_val;
    };

    void info() override{
        cout << "The operator is the person who receives all the calls and makes reservations for customers !" << endl;
    }
};