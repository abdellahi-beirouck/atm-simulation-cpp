#include <iostream>
using namespace std;

int main(){

    int choice = 0, amount = 0, balance = 5000;

    cout << "Bienvenue chez nous, choisissez l'une des options suivantes :" << endl;

    do {
      cout << "\nVotre solde actuel est: " << balance << "$" << endl;
      cout << "\n1 : Retrait" << endl;
      cout << "2 : Depot" << endl;
      cout << "3 : Quitter" << endl;
      cin >> choice;

      if (cin.fail()) {
        cin.clear();
        cin.ignore(10000, '\n');
        choice = 0;
      }

      if (choice == 1) {
        cout << "\nChoisissez le montant a tirer:" << endl;
        cin >> amount;

        if (cin.fail()) {
        cin.clear();
        cin.ignore(10000, '\n');
        amount = 0;
        }

        if (amount > 0 && amount <= balance) {
            balance = balance - amount;
            cout << "\nTransaction reussie, merci." << endl;
        } else {
            cout << "\nErreur, selectionnez un autre montant." << endl;
        }

      } else if (choice == 2) {
        cout << "\nChoisissez le montant a deposer:" << endl;
        cin >> amount;

        if (cin.fail()) {
        cin.clear();
        cin.ignore(10000, '\n');
        amount = 0;
        }

        if (amount > 0) {
           balance = balance + amount;
           cout << "\nTransaction reussie, merci." << endl;
        } else {
            cout << "\nErreur, selectionnez un autre montant." << endl;
        }

      } else if (choice != 3) {
        cout << "\nErreur, selectionnez un autre choix." << endl;
      } 
      
      } while (choice != 3);

      cout << "\nAu Revoir cher client." << endl;

    return 0;
}