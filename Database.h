#ifndef DATABASE_H
#define DATABASE_H

#include <iostream>
#include <fstream>
#include <string>

#include "Item.h"

using namespace std;

class Database {

private:

    LostItem lostItems[100];
    FoundItem foundItems[100];

    int lostCount = 0;
    int foundCount = 0;

public:

    void addLostItem();

    void addFoundItem();

    void showAll();

    void search();
};

#endif