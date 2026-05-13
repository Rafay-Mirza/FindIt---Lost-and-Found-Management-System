#include <iostream>

#include "LoginSystem.h"
#include "Database.h"

using namespace std;

// ---------- CLEAR SCREEN ----------
void clearScreen() {

    system("cls");
}

// ---------- BACK MENU ----------
int backMenu() {

    int choice;

    cout << "\n1. Back To Main Menu\n";
    cout << "2. Repeat Option\n";

    cout << "Enter Choice: ";
    cin >> choice;

    clearScreen();

    return choice;
}

// ---------- MAIN ----------
int main() {

    LoginSystem login;

    Database db;

    int firstChoice;

    // ---------- LOGIN / SIGNUP ----------
    do {

        clearScreen();

        cout << "========== FINDIT SYSTEM ==========\n";

        cout << "1. Signup\n";
        cout << "2. Login\n";

        cout << "Enter Choice: ";
        cin >> firstChoice;

        switch (firstChoice) {

        case 1:

            login.signup();

            system("pause");

            break;

        case 2:

            login.login();

            system("pause");

            break;

        default:

            cout << "Invalid Choice!\n";

            system("pause");
        }

    } while (!login.isAuthenticated());

    clearScreen();

    // ---------- MAIN MENU ----------
    int choice;

    do {

        cout << "\n========== MAIN MENU ==========\n";

        cout << "1. Add Lost Item\n";
        cout << "2. Add Found Item\n";
        cout << "3. Show All Items\n";
        cout << "4. Search Item\n";
        cout << "5. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        clearScreen();

        switch (choice) {

        case 1:

            do {

                db.addLostItem();

            } while (backMenu() == 2);

            break;

        case 2:

            do {

                db.addFoundItem();

            } while (backMenu() == 2);

            break;

        case 3:

            do {

                db.showAll();

            } while (backMenu() == 2);

            break;

        case 4:

            do {

                db.search();

            } while (backMenu() == 2);

            break;

        case 5:

            cout << "Exiting Program...\n";

            break;

        default:

            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}