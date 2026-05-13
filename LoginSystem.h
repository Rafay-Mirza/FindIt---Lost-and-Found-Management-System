#ifndef LOGINSYSTEM_H
#define LOGINSYSTEM_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class LoginSystem {

private:

    bool isLoggedIn = false;

public:

    void signup();

    void login();

    bool isAuthenticated();
};

#endif