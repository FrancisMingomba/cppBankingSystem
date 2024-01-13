#include "user.h"
#include <iostream>

using namespace std;

user::user(string name, float balance)
{
    setName(name);
    setBalance(balance);
}

string user::getName()
{
    return name;
}

void user::setName(string name)
{
    this->name = name;
}

float user::getBalance()
{
    return balance;
}

void user::setBalance(float balance)
{
    if (balance < 0)
        throw invalid_argument("Amount cannot be negative!");
    this->balance = balance;  
}

void user::deposit(float amount)
{
    if (amount < 0)
        throw invalid_argument("Amount cannot be negative!");
    balance += amount;
}

void user::withdraw(float amount)
{
    if (amount > balance)
        throw  invalid_argument("Invalid amount!");
        balance -= amount;
}

void user::display()
{
    cout << "Account Holder" << name << "Balance $: " << " " << balance << endl;
}


