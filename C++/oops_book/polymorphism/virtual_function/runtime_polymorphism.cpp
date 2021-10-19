#include <iostream>
#include <cstring>
using namespace std;

class media
{
protected:
    char title[50];
    float price;

public:
    media(char *s, float a)
    {
        strcpy(title, s);
        price = a;
    }
    virtual void display()
    {
    }
};

class book : public media
{
    int pages;

public:
    book(char *s, float a, int p) : media(s, a)
    {
        pages = p;
    }
    void display();
};

class tape : public media
{
    float time;

public:
    tape(char *s, float a, float t) : media(s, a)
    {
        time = t;
    }
    void display();
};

void book ::display()
{
    cout << "\n title =" << title;
    cout << "\n pages =" << pages;
    cout << "\n price =" << price;
}

void tape ::display()
{
    cout << "\n title =" << title;
    cout << "\n play time =" << time;
    cout << "\n price =" << price;
}

int main()
{

    char *title = new char[30];
    float price, time;
    int pages;

    // book details
    cout << "enter the book details\n ";
    cout << " title ";
    cin >> title;
    cout << "price";
    cin >> price;
    cout << "pages";
    cin >> pages;

    book book1(title, price, pages);

    //tape details
    cout << "enter the tape details\n ";
    cout << " title ";
    cin >> title;
    cout << "price";
    cin >> price;
    cout << "play time ";
    cin >> time;

    tape tape1(title, price, time);
    media *list[2];
    list[0] = &book1;
    list[1] = &tape1;

    cout << " media details \n";
    cout << " \n .......... book .........";
    list[0]->display(); // display  book details

    cout << " tape details \n";
    cout << " \n .......... tape .........";
    list[1]->display(); // display  tape details

    return 0;
}