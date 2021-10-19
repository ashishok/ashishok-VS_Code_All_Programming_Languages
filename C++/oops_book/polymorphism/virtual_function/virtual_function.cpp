#include <iostream>
using namespace std;
class base
{
public:
    void display()
    {
        cout << " display base \n";
    }
    virtual void show()
    {
        cout << "show base\n";
    }
};
class derived : public base
{
public:
    void display()
    {
        cout << "display derived \n";
    }
    void show()
    {
        cout << "show  derived\n";
    }
};

int main()
{
    base b;
    derived d;
    base *bptr;

    cout << "\n bptr points to base \n";
    bptr = &b;
    bptr->display();
    bptr->show();

    cout << "\n\n bptr points to derived \n";
    bptr = &d;
    bptr->display();
    bptr->show();               // calls the derived version becaues the disply() has not been made virtual in the base class

    return 0;
}