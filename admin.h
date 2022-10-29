#pragma once;

class Admin:public Person
{
public:

    float income_amount = 0;
    int age;
    string IDNP;

    Admin(string c_name, string c_forename, string c_phone_number, int c_age, string c_IDNP)
    {
        name = c_name;
        forename = c_forename;
        phone_number = c_phone_number;
        age = c_age;
        IDNP = c_IDNP;
    }

    void manage_company()
    {
        cout << "My name is " << forename << " and I manage this Taxi Company !" << endl;
    }

    void manage_salary(float customer_amount) {
        income_amount = income_amount + customer_amount;
        cout << "The income for this day is " << income_amount << " lei. ";
    }

    float rank(float value) override{
        rank_val = value - 3;
        return rank_val;
    };

    void info() override{
        cout << "The admin is the company manager who is responsible for everything that happens in the company !" << endl;
    }
};