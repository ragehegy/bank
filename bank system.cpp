

#include <iostream>
using namespace std;
#include <string>
#include "Person.h"
#include "Client.h"
#include "Employee.h"
#include "Admin.h"


int main() {
	//
	// int id;
	// cin>>id;
	//
	// string  name;
	// cin>>name;
	
	

	
	
//	Client c1(1400, 30, "seka1", "sayed we");
	
	 
	//sayed
	//c1.display();


	// Person* p = new Employee(4000, 20, "sayed", "hhhhhhhhhttttt");

	// p->display();

	// delete p;
	//Admin a(15888, 30, "sekarrr", "sayedhehsam");
	Employee *e[2]={new Employee (66666,50,"abdoo","305060000"),new Admin (17000,50,"mohamed","3050608787878")};
	e[0]->display();
	e[1]->display();

	// Employee* p= new Admin(17000,50,"mohamed","3050608787878");
	// p->display();
}


