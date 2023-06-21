#include "Admin.h"
#include "Validation.h"

Admin::Admin(string name, string password, double salary) :Employee(name, password,salary) {
	adminNumber++;
	id = adminNumber;
}
int Admin::adminNumber = 0;
static vector<Admin>::iterator aIt;


