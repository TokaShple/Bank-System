#include "Person.h"
#include "Validation.h"

Person::Person(int id, string name, string password) :  name(name), password(password) {
	this->id = id;
	this->name = name;
	this->password = password;
}
//getters
int Person::get_id() {
	return id;
}
string Person::get_name() {
	return name;
}
string Person::get_password() {
	return password;
}
//setters
void Person::set_id(int id) {
	this->id = id;
}
void Person::set_name(string name) {
	if (Validation::isValidName(name)) {
		this->name = name;
	}
	else {
		cout << "Invalid Name!!" << endl;
	}
}
void Person::set_password(string password) {
	if (Validation::isValidPassword(password)) {
		this->password = password;
	}
	else {
		cout << "Invalid Password!!" << endl;
	}
}
//methods
void Person::print_info() {
	cout << "ID: " << id<<endl
		<<  "Name: " << name << endl
		<<  "Password: " << password << endl;
}

