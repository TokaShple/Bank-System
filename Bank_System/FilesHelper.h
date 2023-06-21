#pragma once
#include <fstream>
#include "Client.h"
#include "Admin.h"
#include "Employee.h"
#include "Parser.h"
using namespace std;
class FilesHelper
{
public:
	static void save_last(string fileName, int id) {
		ofstream file;
		file.open(fileName);
		file << id;
		file.close();
	}

	static int get_last(string fileName) {
		ifstream file;
		file.open(fileName);
		int id;
		file >> id;
		file.close();
		return id;
	}
	static void save_client(string fileName, string lastIdFile, Client c) {
		int id = get_last("ClientLastId.txt");
		fstream file;
		file.open("Clients.txt", ios::app);
		file << id + 1 << '&' << c.get_name() << '&' << c.get_password() << '&' << c.get_balance() << endl;
		file.close();
		save_last("ClientLastId.txt", id + 1);
	}
	static void save_employee(string fileName, string lastIdFile, Employee e) {
		int id = get_last("EmployeeLastId.txt");
		fstream file;
		file.open("Employess.txt", ios::app);
		file << id + 1 << '&' << e.get_name() << '&' << e.get_password() << '&' << e.get_salary() << endl;
		file.close();
		save_last("EmployeeLastId.txt", id + 1);
	}
	static void save_admin(string fileName, string lastIdFile, Admin a) {
		int id = get_last("AdminLastId.txt");
		fstream file;
		file.open("Admins.txt", ios::app);
		file << id + 1 << '&' << a.get_name() << '&' << a.get_password() << '&' << a.get_salary() << endl;
		file.close();
		save_last("AdminLastId.txt", id + 1);
	}
	static void get_clients() {
		string line;
		ifstream file;
		file.open("Clients.txt");
		while (getline(file, line)) {
			Client c = Parser::parseToClient(line);
			allClients.push_back(c);
		}
		file.close();
	}
	static void get_employees() {
		string line;
		ifstream file;
		file.open("Employees.txt");
		while (getline(file, line)) {
			Employee e = Parser::parseToEmployee(line);
			allEmployees.push_back(e);
		}
		file.close();
	}
	static void get_admins() {
		string line;
		ifstream file;
		file.open("Admins.txt");
		while (getline(file, line)) {
			Admin a = Parser::parseToAdmin(line);
			allAdmins.push_back(a);
		}
		file.close();
	}
	static void clear_file(string fileName, string lastIdFile) {
		fstream file1, file2;
		file1.open(fileName, ios::out, ios::trunc);
		file1.close();
		file2.open(lastIdFile, ios::out);
		file2 << 0;
		file2.close();
	}
};

