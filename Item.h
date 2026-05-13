#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>

using namespace std;

// ---------- CATEGORY ----------
class Category {

public:

    string categoryName;

    void setCategory();
};

// ---------- PERSON ----------
class Person {

public:

    string name;
    string contact;

    void setDetails(string role);
};

// ---------- LOCATION ----------
class Location {

public:

    string building;
    string area;

    void setLocation();
};

// ---------- DATE ----------
class Date {

public:

    string date;

    void setDate();
};

// ---------- ITEM ----------
class Item {

public:

    int itemID;

    string itemName;
    string description;
    string status;

    Category category;

    void setBasicDetails(string stat);

    void show();
};

// ---------- LOST ITEM ----------
class LostItem : public Item {

public:

    Person owner;
    Location location;
    Date date;

    void setDetails();

    void show();
};

// ---------- FOUND ITEM ----------
class FoundItem : public Item {

public:

    Person finder;
    Location location;
    Date date;

    void setDetails();

    void show();
};

#endif