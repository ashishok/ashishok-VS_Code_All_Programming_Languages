#include <iostream>
using namespace std;

class M
{
protected:
    int m;

public:
    void get_m(int);
};
class N
{
protected:
    int n;

public:
    void get_n(int);
};

class P : public M, public N
{
public:
    void display();
};
void M ::get_m(int a)
{
    m = a;
}
void N ::get_n(int b)
{
    n = b;
}
void P ::display()
{
    cout << " m =" << m << endl;
    cout << " n =" << n << endl;
    cout << " m*n =" << m * n << endl;
}
int main()
{
    P p;
    p.get_m(10);
    p.get_n(20);
    p.display();
    // p.M::display();             // when more the one display() function present in the code 
    // p.N::display();             // when more the one display() function present in the code
    return 0;
}