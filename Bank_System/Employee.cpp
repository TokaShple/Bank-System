#include "Employee.h"
#include <vector>
Employee::Employee( string name, string password, double salary) :Person(id, name, password) {
	employeeNumber++;
	id = employeeNumber;
	this->salary = salary;
}
//getters
double Employee::get_salary() {
	return salary;
}
int Employee::get_employeeNumber() {
	return employeeNumber;
}
//setters
void Employee::set_salary(double salary) {
	this->salary = salary;
	if (salary >= 5000.0) {
		cout << "Welcome" <<  endl;
	}
	else {
		cout << "Salary less than 5000.0 L.E";
	}
}
//methods
void Employee::print_Info () {
	Person::print_info();
	cout << "Salary: " << salary << endl;
}


int Employee::employeeNumber = 0;
static vector<Employee>::iterator eIt;