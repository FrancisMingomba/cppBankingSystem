#pragma once
#include <string>

using namespace std;
class user
{
private:
	string name;
	float balance;

public:

	user(string name, float balance);

	string getName();
	void setName(string name);

	float getBalance();
	void setBalance(float balance);

	void deposit(float amount);
	void withdraw(float amount);
	void display();
};

