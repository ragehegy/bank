#pragma once
#include "Employee.h"
class Admin :
    public Employee
{


public:
    Admin(double salary, int id, string name, string password):Employee(salary,id,name,password) 
    
    
    {}



    void display() {
        // Employee::display();
        cout << endl << "Salary: " << Employee::salary << endl;
        cout<<name<<
    }


};

