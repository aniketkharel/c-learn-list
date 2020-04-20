/*
//
// Created by aniket on 4/16/2020.
//
#include "iostream"
#include "cstring"

using namespace std;

class city {
public:
    void display() { cout << "\n Display city base"; }

    virtual void show() { cout << "\n show base"; }
};


class village : public city {
public:
    void display() { cout << "\n Display village base"; }

    void show() { cout << "\n show village base"; }

};


city* cityPointer;

int main() {


    //virtual function and pointers
    city city;
    village village;

    cout << "\n cityPointer points to the city";

    cityPointer = &city;

    //calls base version functions
    cityPointer->display();
    cityPointer->show();

    //
    cityPointer = &village;

    cout << "\n cityPointer points to the village now";

    cityPointer->display();
    cityPointer->show();

    return 0;
}*/
