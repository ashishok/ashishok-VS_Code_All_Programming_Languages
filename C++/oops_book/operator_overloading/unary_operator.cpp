#include <iostream>
using namespace std;

class space
{
    int x, y, z;

public:
    void getdata(int a, int b, int c);
    void display();
    void operator-();
};
void space ::getdata(int a, int b, int c)
{
    x = a;
    y = b;
    z = c;
}
void space ::display()
{
    cout << x << endl
         << y << endl
         << z << endl;
}

void space ::operator-()
{
    x = -x;
    y = -y;
    z = -z;
}
int main()
{
    space S;
    S.getdata(10, 20, 30);
    S.display();
    -S;
    S.display();
    return 0;
}