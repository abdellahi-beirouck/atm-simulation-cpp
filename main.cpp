#include <iostream>
using namespace std;

int main(){

    int choice = 0, amount = 0, balance = 5000;

    cout << "Welcome, please select one of the following options :" << endl;

    do {
      cout << "\nYour Current Balance is :" << balance << "$" << endl;
      cout << "\n1 : Withdraw" << endl;
      cout << "2 : Deposit" << endl;
      cout << "3 : Exit" << endl;
      cin >> choice;

      if (cin.fail()) {
        cin.clear();
        cin.ignore(10000, '\n');
        choice = 0;
      }

      if (choice == 1) {
        cout << "\nChoose the amount to withdraw" << endl;
        cin >> amount;

        if (cin.fail()) {
        cin.clear();
        cin.ignore(10000, '\n');
        amount = 0;
        }

        if (amount > 0 && amount <= balance) {
            balance = balance - amount;
            cout << "\nTransaction Successful, Thank You." << endl;
        } else {
            cout << "\nError, Choose Another Amount." << endl;
        }

      } else if (choice == 2) {
        cout << "\nChoose the amount to deposit" << endl;
        cin >> amount;

        if (cin.fail()) {
        cin.clear();
        cin.ignore(10000, '\n');
        amount = 0;
        }

        if (amount > 0) {
           balance = balance + amount;
           cout << "\nTransaction Successful, Thank You." << endl;
        } else {
            cout << "\nError, Choose Another Amount." << endl;
        }

      } else if (choice != 3) {
        cout << "\nError, Select Another Choice." << endl;
      } 
      
      } while (choice != 3);

      cout << "\nSession ended. Goodbye." << endl;

    return 0;
}