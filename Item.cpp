#include "Item.h"

// ---------- CATEGORY ----------
void Category::setCategory() {

    int choice;

    cout << "\n===== SELECT CATEGORY =====\n";

    cout << "1. Electronics\n";
    cout << "2. Clothes\n";
    cout << "3. Sports Items\n";
    cout << "4. Documents\n";
    cout << "5. Other\n";

    cout << "Enter Choice: ";
    cin >> choice;

    switch (choice) {

    case 1:
        categoryName = "Electronics";
        break;

    case 2:
        categoryName = "Clothes";
        break;

    case 3:
        categoryName = "Sports Items";
        break;

    case 4:
        categoryName = "Documents";
        break;

    default:
        categoryName = "Other";
    }
}

// ---------- PERSON ----------
void Person::setDetails(string role) {

    cin.ignore();

    cout << "Enter " << role << " Name: ";
    getline(cin, name);

    cout << "Enter Contact: ";
    getline(cin, contact);
}

// ---------- LOCATION ----------
void Location::setLocation() {

    cout << "Enter Building: ";
    getline(cin, building);

    cout << "Enter Area: ";
    getline(cin, area);
}

// ---------- DATE ----------
void Date::setDate() {

    cout << "Enter Date: ";
    cin >> date;
}

// ---------- ITEM ----------
void Item::setBasicDetails(string stat) {

    cout << "Enter Item ID: ";
    cin >> itemID;

    cin.ignore();

    cout << "Enter Item Name: ";
    getline(cin, itemName);

    cout << "Enter Description: ";
    getline(cin, description);

    status = stat;

    category.setCategory();
}

void Item::show() {

    cout << "\nItem ID: " << itemID << endl;

    cout << "Item Name: " << itemName << endl;

    cout << "Description: " << description << endl;

    cout << "Status: " << status << endl;

    cout << "Category: " << category.categoryName << endl;
}

// ---------- LOST ITEM ----------
void LostItem::setDetails() {

    cout << "\n===== LOST ITEM =====\n";

    setBasicDetails("Lost");

    owner.setDetails("Owner");

    location.setLocation();

    date.setDate();
}

void LostItem::show() {

    cout << "\n===== LOST ITEM =====\n";

    Item::show();

    cout << "Owner: " << owner.name << endl;

    cout << "Contact: " << owner.contact << endl;

    cout << "Building: " << location.building << endl;

    cout << "Area: " << location.area << endl;

    cout << "Date: " << date.date << endl;
}

// ---------- FOUND ITEM ----------
void FoundItem::setDetails() {

    cout << "\n===== FOUND ITEM =====\n";

    setBasicDetails("Found");

    finder.setDetails("Finder");

    location.setLocation();

    date.setDate();
}

void FoundItem::show() {

    cout << "\n===== FOUND ITEM =====\n";

    Item::show();

    cout << "Finder: " << finder.name << endl;

    cout << "Contact: " << finder.contact << endl;

    cout << "Building: " << location.building << endl;

    cout << "Area: " << location.area << endl;

    cout << "Date: " << date.date << endl;
}