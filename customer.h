#pragma once;

class Customer:public Person
{
public:

    Customer(string c_name, string c_forename, string c_phone_number)
    {
    	name = c_name;
        forename = c_forename;
        phone_number = c_phone_number;
    }

    void customer_request()
    {
    	cout << "Hello my name is " << forename << ". I would want ...." << endl ;
    }

    float rank(float value) override{
        rank_val = value - 1;
        return rank_val;
    };

    void info() override{
        cout << "Customers are very important in our company because they are the source of income !" << endl;
    }
};