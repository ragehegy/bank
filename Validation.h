#pragma once
#include <iostream>
using namespace std;
#include<string>
class Validation
{
public:

	static bool isValidName(string name) {
		 // enter first  if no  flase
		if (name.size() < 5|| name.size() > 20) {
			return false;

		}
		//for eachloop
		for (char c:name) {

			if (!isalpha(c) || c == ' ') {
				return false;
			}
		}

		return true;
	}


	static bool isValidPassword(string Password) {

		
		if (Password.size() < 8|| Password.size() > 20) {
			return false;
		}

		for (char c : Password) {
			if (c == ' ') {
				return false;
			}
		}
		
		return true;



		


	}

	static bool isMinBalance(double balance) {

		if (balance < 1500) {
			return false;
		}
		else {
			return true;
		}
	}


	static bool isValId(int id) {
		if (id > 0) {
			return true;
		}
		else
			return false;
	}


	static bool isValidSalary(double salary) {
		if (salary < 5000) {
			return false;

		}
		else {
			return true;
		}
	}
};

