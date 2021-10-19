#include <iostream>
using namespace std;

class integer
{
private:
    int m, n;

public:
    integer(int, int);
    void display()
    {
        cout << "m =" << m << endl;
        cout << "n =" << n << endl;
    }
};

integer::integer(int x, int y)
{
    m = x;
    n = y;
    // cout<<"hello";
}

int main()
{
    integer int1(0, 100);
    // integer(1,2);
    integer int2 = integer(25, 75);
    int1.display();
    int2.display();
    return 0;
}