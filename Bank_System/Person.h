#pragma once
#include <string>
#include<iostream>
using namespace std;
class Person{
protected:
	int id=0;
	string name, password;
public:
	//constructors
	Person() {}
	Person(int id, string name, string password);
	//getters
	int get_id();
	string get_name();
	string get_password();
	//setters
	void set_id(int id);
	void set_name(string name);
	void set_password(string password);
	//methods
	void print_info();
};


