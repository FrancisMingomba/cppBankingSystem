
#include <iostream>
#include <string>
#include"user.h"
using namespace std;

int main()
{
    try {
        std::cout << "Create an account" << endl;

        string name;
        float balance;
        float amount = 0;

        std::cout << "Enter your name: ";
        getline(std::cin, name);
        std::cout << "Enter initial deposit: ";
        std::cin >> balance;

        user users(name, balance);

        int option;

        do {
            std::cout << "\n1. Deposit: " << endl;
            std::cout << "2. Withdraw: " << endl;
            std::cout << "3. Show account details: " << endl;
            
            cin >> option;

            switch (option)
            {
            case 1:
                std::cout << "Enter deposit amount: " << endl;
                cin >> amount;
                users.deposit(amount);
                break;
            case 2:
                std::cout << "Enter withdraw amount: " << endl;
                cin >> amount;
                users.withdraw(amount);            
                cout << "Current balance: " << users.getBalance() << endl;
                break;
            case 3:
                users.display();
                break;
            default:
                std::cout << "Invalid choice!" << std::endl;
            }

        } while (option != 2);
    }
    catch (const invalid_argument& ex) {
        cout << ex.what();
    };
          return 0;
}
