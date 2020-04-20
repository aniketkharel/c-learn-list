/*
//
// Created by aniket on 4/16/2020.
//
#include "iostream"
#include "cstring"

using namespace std;

class Media {
protected:
    char title[10];
    float price;
public:
    Media(char *s, float a) {
        strcpy(title, s);
        price = a;
    }

    virtual void display() {};
};

class Book : public Media {
    int pages;

public:
    Book(char *s, float a, int page) : Media(s, a) {
        pages = page;
    }

    void display() override;
};

class Tape : public Media {

    float times;

public:
    Tape(char *s, float a, float time) : Media(s, a) {
        times = time;
    }

    void display() override;

};

void Book::display() {
    cout << "\n Title is   : " << title;
    cout << "\n Pages are  : " << pages;
    cout << "\n Price is   : " << price;
}

void Tape::display() {
    cout << "\n Title is   : " << title;
    cout << "\n Time is    : " << times;
    cout << "\n Price is   : " << price;
}

int main() {
    char *title = new char[10];
    float price, time;
    int pages;
    //Book details
    cout << "\n ENTER THE BOOK DETAILS \n";
    cout << "\n TITLE : \n";
    cin >> title;
    cout << "\n PRICE : \n";
    cin >> price;
    cout << "\n PAGES : \n";
    cin >> pages;

    Book book(title, price, pages);

    //Book details
    cout << "\n ENTER THE TAPE DETAILS \n";
    cout << "\n TITLE : \n";
    cin >> title;
    cout << "\n PRICE : \n";
    cin >> price;
    cout << "\n TIME : \n";
    cin >> time;
    Tape tape(title, price, time);

    Media *media[2];
    media[0] = &book;
    media[1] = &tape;

    cout << "\n MEDIA DETAILS \n";
    cout << "\n BOOKS DETAILS \n";
    media[0]->display();
    cout << "\n TAPE DETAILS \n";
    media[1]->display();

    return 0;
}*/
