#pragma once
#include<iostream>
using namespace std;
#include<string>
#include "Person.h"
#include"Validation.h"

class Client :
    public Person
{
private:
    double balance;

public:

    Client(double balance, int id, string name, string password) :Person(id, name, password) {

       while (!Validation::isMinBalance(balance)) {
            cout << "min balance  must have greater than or equal 1500"<<endl;
            cin >> balance;
            
        }
        
            this->balance = balance;
       

    }

    void setBalance(double balance) {

        while (!Validation::isMinBalance(balance)) {
            cout << "min balance  must have greater than or equal 1500\n";
            cin >> balance;

        }
  
         this->balance = balance;
      


     
    }

    //getters 
    double getBalance() {
        return balance;
    }


    //methods

    void deposite(double& amount) {

        balance += amount;
    }


    void withdrow(double amount) {

        if (balance > amount || balance == 1500  ) {

            cout << "you do not have enough money  for withdraw";
        }

        if(balance>0){

            cout<<"you can not with draw by zero";
        }
        else {
            balance -= amount ;
        }


    }

    void transfare(double amount, Client& client) {

        if (balance > amount || balance == 1500) {

            cout << "you do not have enough money  for transaction";
        }
        else {
            balance -= amount;
            client.deposite(amount);
        }

       
    }

    //check balance 
    void checkBalance() {
        cout << balance<<endl;
    }

    void display() {
        Person::display();
        cout << "balane:" << balance<<endl;
        cout << "######################### \n";
    }

};

