

#include <iostream>
using namespace std;
#include <string>
#include "Person.h"
#include "Client.h"
#include "Employee.h"
#include "Admin.h"


int main() {
	
	Employee *e[2]={new Employee (66666,50,"abdoo","305060000"),new Admin (17000,50,"mohamed","3050608787878")};
	e[0]->display();
	e[1]->display();

}


