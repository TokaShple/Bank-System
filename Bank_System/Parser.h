#pragma once
#include<sstream>
#include <string>
#include <vector>
#include "Client.h"
#include "Employee.h"
#include "Admin.h"
class Parser
{
public:
	static vector<string> split(string line) {
		stringstream stream(line);
		vector<string> info;
		string data;
		while (getline(stream, data, '&')) {
			info.push_back(data);
		}
		return info;
	}

	static Client parseToClient(string line) {
		vector<string> info = split(line);
		Client c;
		c.set_id(stoi(info[0]));
		c.set_name(info[1]);
		c.set_password(info[2]);
		c.set_balance(stod(info[3]));
		return c;
	}

	
	static Employee parseToEmployee(string line) {
		vector<string> info = split(line);
		Employee e;
		e.set_id(stoi(info[0]));
		e.set_name(info[1]);
		e.set_password(info[2]);
		e.set_salary(stod(info[3]));
		return e;
	}


	static Admin parseToAdmin(string line) {
		vector<string> info = split(line);
		Admin a;
		a.set_id(stoi(info[0]));
		a.set_name(info[1]);
		a.set_password(info[2]);
		a.set_salary(stod(info[3]));
		return a;
	}


};

