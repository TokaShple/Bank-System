#pragma once
#include "Person.h"
#include <vector>
#include <iterator>
#include "Validation.h"
class Client :public Person{
private:
	double balance=0;
	double amount=0;
	vector<Client>clients;
	static int clientNumber;
public:
	//constructor
	Client() {
		id = clientNumber;
		clientNumber++;
	}
	Client(string name, string password, double balance,double amount);
	//getters
	double get_balance();
	double get_amount();
	vector<Client> get_clients();
	//setters
	void set_balance(double balance);
	void set_amount(double amount);
	void set_clients(vector<Client> clients);
	//methods
	void deposit(double amount);
	void withdraw(double amount);
	void transferTo(double amount, Client& recipient);
	void checkBalance();
	void addClient();
	void print_info();
	void print_client_info();
};
static vector<Client> allClients;

