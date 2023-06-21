#pragma once
#include "Employee.h"
#include<vector>
class Admin :public Employee{
private:
	static int adminNumber;
public:
	//constructors
	Admin(){
		adminNumber++;
		id = adminNumber;
	};
	Admin(string name, string password, double salary);
};
static vector<Admin> allAdmins;

