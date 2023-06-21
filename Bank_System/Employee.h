#pragma once
#include "Person.h"
#include<vector>
#include <iterator>
class Employee :public Person{
private:
	double salary=0;
	static int employeeNumber;
public:
	//constructors
	Employee(){
		employeeNumber++;
		id = employeeNumber;
	};
	Employee(string name, string password, double salary);
	//getters
	double get_salary();
	static int get_employeeNumber();
	//setters
	void set_salary(double salary);
	//methods
	void print_Info();
};
static vector<Employee> allEmployees;
