#include <iostream>
#include <string>
#include <vector>
#include "Client.h"
#include "Employee.h"
#include "Admin.h"
using namespace std;

int main() {
	Client c;
	int x;
	cout << "Please,Enter the number of clients: " << endl;
	cin >> x;
	for (int i = 1; i <= x; i++) {
		c.addClient();
	}
	cout << "\n==========================\n";
	c.print_client_info();
}