#include "Database.h"

// ---------- ADD LOST ITEM ----------
void Database::addLostItem() {

    lostItems[lostCount].setDetails();

    ofstream file("LostItems.csv", ios::app);

    file << lostItems[lostCount].itemID << ","
        << lostItems[lostCount].itemName << ","
        << lostItems[lostCount].description << ","
        << lostItems[lostCount].status << ","
        << lostItems[lostCount].category.categoryName
        << endl;

    file.close();

    lostCount++;

    cout << "\nLost Item Added Successfully!\n";
}

// ---------- ADD FOUND ITEM ----------
void Database::addFoundItem() {

    foundItems[foundCount].setDetails();

    ofstream file("FoundItems.csv", ios::app);

    file << foundItems[foundCount].itemID << ","
        << foundItems[foundCount].itemName << ","
        << foundItems[foundCount].description << ","
        << foundItems[foundCount].status << ","
        << foundItems[foundCount].category.categoryName
        << endl;

    file.close();

    foundCount++;

    cout << "\nFound Item Added Successfully!\n";
}

// ---------- SHOW ALL ----------
void Database::showAll() {

    cout << "\n===== LOST ITEMS =====\n";

    for (int i = 0; i < lostCount; i++) {

        lostItems[i].show();
    }

    cout << "\n===== FOUND ITEMS =====\n";

    for (int i = 0; i < foundCount; i++) {

        foundItems[i].show();
    }
}

// ---------- SEARCH ----------
void Database::search() {

    string key;

    cin.ignore();

    cout << "Enter Item Name: ";
    getline(cin, key);

    bool found = false;

    for (int i = 0; i < lostCount; i++) {

        if (lostItems[i].itemName == key) {

            lostItems[i].show();

            found = true;
        }
    }

    for (int i = 0; i < foundCount; i++) {

        if (foundItems[i].itemName == key) {

            foundItems[i].show();

            found = true;
        }
    }

    if (!found) {

        cout << "\nItem Not Found!\n";
    }
}