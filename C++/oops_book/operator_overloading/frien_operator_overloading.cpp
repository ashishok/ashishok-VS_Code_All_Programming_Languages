#include <iostream>
using namespace std;
const int size = 3;
class vector
{
    int v[size];

public:
    vector();                                 //constructs
    vector(int *x);                           //constructs
    friend vector operator*(int a, vector b); //friend 1
    friend vector operator*(vector b, int a); //friend 2
    friend istream &operator>>(istream &, vector &);
    friend ostream &operator<<(ostream &, vector &);
};
vector::vector()
{
    for (int i = 0; i < size; i++)
        v[i] = 0;
}
vector::vector(int *x)
{
    for (int i = 0; i < size; i++)
        v[i] = x[i];
}
vector operator*(int a, vector b)
{
    vector c;
    for (int i = 0; i < size; i++)
        c.v[i] = a * b.v[i];
    return c;
}
vector operator*(vector b, int a)

{
    vector c;
    for (int i = 0; i < size; i++)
        c.v[i] = b.v[i] * a;
    return c;
}
istream &operator>>(istream &din, vector &b)
{
    for (int i = 0; i < size; i++)
        din >> b.v[i];
    return (din);
}
ostream &operator<<(ostream &dout, vector &b)
{
    dout << "(" << b.v[0];
    for (int i = 1; i < size; i++)
        dout << ", " << b.v[i];
    dout << ")";
    return (dout);
}
int x[size] = {2, 4, 6};
int main()
{
    vector m;     //invokes constructor 1
    vector n = x; // invoke constructor 2
    cout << "enter the elements of the vector m " << endl;
    cin >> m; //invokes operator >>() function
    cout << endl;
    cout << "m  =" << m << "\n"; //invokes operator <<()

    vector p, q;
    p = 2 * m; //invokes friend 1
    q = n * 2; //invokes friend 2
    cout << "\n";
    cout << "p =" << p << "\n"; //invokes operator<<()
    cout << "q =" << q << "\n";
    return 0;
}