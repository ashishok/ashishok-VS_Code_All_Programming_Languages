#include <iostream>
using namespace std;

template <typename T>

void maxi(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10;
    int b = 20;
    string name = "ashish";
    string game = "kumar";

    maxi(a, b);
    cout << "a:" << a << "\tb:" << b << endl;

    maxi(name, game);
    cout << name << " " << game << endl;

    return 0;
}
