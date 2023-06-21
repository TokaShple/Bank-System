#include "Client.h"

Client::Client(string name, string password, double balance,double amount):Person(id,name,password) {
	id = clientNumber;
	clientNumber++;
	this->balance = balance;
	this->amount = amount;
}
//getters
double Client::get_balance() {
	return balance;
}
double Client::get_amount() {
	return amount;
}
vector<Client> Client::get_clients() {
	return clients;
}
//setters

void Client::set_balance(double balance) {
	if (Validation::isValidBalance) {
		this->balance = balance;
	}
	else {
		cout<<"Invalid Balance!!!"<<endl;
	}
}
void Client::set_amount(double amount) {
	this->amount = amount;
}
void Client::set_clients(vector<Client>clients) {
	this->clients = clients;
}
//methods
void Client::deposit(double amount) {
	if (amount > 0) {
		this->balance += amount;
		cout << "You Have Added " << amount << " successfully \n";
	}
		
}

void Client:: withdraw(double amount) {
	if (amount <= balance && amount > 0) {
		this->balance -= amount;
		cout << "You have successfully received " << amount << endl;

	}
	else {
		cout << "Please Check Your Balance! \n";
	}
}

void Client::checkBalance() {
	cout << "Your current balance is: " << balance << endl;
}

void Client::addClient() {
		string answer;
		
		cout << "Please,Enter Client Name: " << endl;
		cin >> name;
		cout << "Please,Enter Client Password: " << endl;
		cin >> password;
		cout << "Please,Enter Client Balance: " << endl;
		cin >> balance;

		cout << "Do you want to deposit?" << endl;
		cout << "Enter yes or no: " << endl;
		cin >> answer;
		if (answer == "yes") {
			cout << "Please,Enter the amount: ";
			cin >> amount;
			deposit(amount);
		}
		else {
			cout << "No Deposit Happened!!!" << endl;
		}

		cout << "Do you want to Withdraw?" << endl;
		cout << "Enter yes or no: " << endl;
		cin >> answer;
		if (answer == "yes") {
			cout << "Please,Enter the amount: ";
			cin >> amount;
			withdraw(amount);
		}
		else {
			cout << "No Withdraw Happened!!" << endl;
		}

		cout << "Do you want to check your balance?" << endl;
		cout << "Enter yes or no: " << endl;
		cin >> answer;
		if (answer == "yes") {
			checkBalance();
		}
	clients.push_back(Client(name, password, balance, amount));

}

void Client::print_info() {

	Person::print_info();
	cout << "Balance: " << balance << endl;
}

void Client::print_client_info() {

	for (int i = 0; i < clients.size(); i++) {
		clients[i].print_info();
		deposit(amount);
		withdraw(amount);
		checkBalance();
		cout << "\n==========================\n";
	}
}


int Client::clientNumber = 0;
static vector<Client>::iterator clIt;
