#include "LoginSystem.h"

void LoginSystem::signup() {

    string username;
    string password;

    cin.ignore();

    cout << "\n========== SIGN UP ==========\n";

    cout << "Enter Username: ";
    getline(cin, username);

    cout << "Enter Password: ";
    getline(cin, password);

    ofstream file("users.txt", ios::app);

    file << username << "," << password << endl;

    file.close();

    cout << "\nAccount Created Successfully!\n";
}

void LoginSystem::login() {

    string username;
    string password;

    string fileUser;
    string filePass;

    cin.ignore();

    cout << "\n========== LOGIN ==========\n";

    cout << "Enter Username: ";
    getline(cin, username);

    cout << "Enter Password: ";
    getline(cin, password);

    ifstream file("users.txt");

    while (getline(file, fileUser, ',') &&
        getline(file, filePass)) {

        if (username == fileUser &&
            password == filePass) {

            isLoggedIn = true;
            break;
        }
    }

    file.close();

    if (isLoggedIn) {

        cout << "\nLogin Successful!\n";
    }

    else {

        cout << "\nInvalid Username or Password!\n";
    }
}

bool LoginSystem::isAuthenticated() {

    return isLoggedIn;
}