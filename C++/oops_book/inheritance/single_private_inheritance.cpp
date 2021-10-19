#include <iostream>
using namespace std;

class B
{
    int a;

public:
    int b;
    void get_ab();
    int get_a();
    void show_a();
};

class D : private B             // private declaration
{
    int c;

public:
    void mul();
    void display();
};

void B ::get_ab()
{
    cout<<" enter the values  for the a and b\n";
    cin>>a>>b;
}
int B ::get_a()
{
    return a;
}
void B ::show_a()

{
    cout << "a = " << a << endl;
}
void D ::mul()
{
    get_ab(); 
    c = b * get_a();                // a cannot be used directly
}
void D ::display()
{
   show_a();
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
}
int main()
{

    D d;
    //d.get_ab();         // won't work
    d.mul();
    //d.show_a();         // won't work
    d.display();

    //d.b = 20;               // won't work as b has become private 
    d.mul();
    d.display();
    return 0;
}