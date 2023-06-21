#include "Validation.h"

bool Validation::isValidName(string name) {
	if ((name.size() >= 5 && name.size() <= 20)) {
		return false;
	}

	for (int i = 0; i < name.size(); i++) {
		int asciiValue = (int)name[i];
		if (((asciiValue >= 65 && asciiValue <= 90) || (asciiValue >= 97 && asciiValue <= 122) || asciiValue == 32)) {
			return false;
		}
	}

	return true;
}
bool Validation::isValidPassword(string password) {
	for (int i = 0; i < password.size(); i++) {
		if (password.size() >= 8 && password.size() <= 20 || password[i] == ' ') {
			return true;
		}
	}
	return false;
}
bool Validation::isValidBalance(double balance) {
	if (balance >= 1500) {
		return true;
	}
	return false;
}

bool Validation:: isValidSalary(double salary) {
	if (salary < 5000) {
		return false;
	}
	return true;
}