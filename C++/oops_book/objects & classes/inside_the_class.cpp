#include <iostream>
using namespace std;

class item
{
private:
    /* data */
    int number;           //private by default
    float cost;      //private by default

public:
    void getdata(int number, float cost);       //prototype declarartion to be defined
    void putdata(void)                          // behaves as an inline inline function
    {
        cout << "number :" << number << "\n";
        cout << "cost :" << cost << "\n";
    }
};

//..............member function defination..........

 void item ::getdata(int a, float b)
{
    number = a;
    cost = b;
}
//>............main program................

int main()
{
    item x;
    cout << "\nno object x" << endl;
    x.getdata(100, 299.50);
    x.putdata();

    item y;
    cout << "\nno object y" << endl;
    y.getdata(200, 2176.50);
    y.putdata();
    return 0;
}