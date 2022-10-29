#pragma once;

class Economy_Management:Taxi_Company
{
public:

    float income = 0;
    float amount = 0;
    float price = 0;
    string rating;

    void return_salary() {
        cout << "Good job, keep going !" << endl;
    }

    void return_income(float z) {
        if (z >= 50){
            cout << "A very good profit for today !!!" << endl;         
        }else{
            cout << "Not bad for today" << endl;
        }
        
    }

    void info() override{
        cout << "Economy Management System represents a system that returns salary and income ! " << endl;
    }
};


class Payment:public Economy_Management
{
public:
    string payment_type;

    Payment(string c_payment_type)
    {
    	payment_type = c_payment_type;
    }

    void payment_details()
    {
        cout << "The customer paid with " << payment_type << endl;
        if(payment_type == "card"){
            cout << "Also, ";
            cout << "the payment was completed successfully !" << endl;
        }else{
            cout << "Also, ";
            cout << "the payment was completed successfully !" << endl;
        }
    }

    void info() override{
        cout << "Payment represents a system which checks whether the transaction was by card or cash ! " << endl;
    }
};


class Salary:public Economy_Management
{
public:

    float calculate_salary(float customer_income){
        income = income + customer_income;
        return income;
    }

    void info() override{
        cout << "Salary Class calculate the salary !" << endl;
    }

};

class Income: public Economy_Management
{
public:

    float calculate_income(float current_income){
        income = income + current_income - (current_income*0.5);
        return income;
    }

    void info() override{
        cout << "Income Class calculate the income !" << endl;
    }
};

class Rating: public Taxi_Company
{
public:
    
    void ride_rating(string rating){
    	cout << "The customed said that ride was " << rating << " out of 10" << endl;
    }

    void info() override{
        cout << "Rating Class return the ratirn of ride !" << endl;
    }
};
