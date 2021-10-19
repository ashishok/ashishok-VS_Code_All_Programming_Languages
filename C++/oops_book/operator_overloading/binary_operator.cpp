#include <iostream>
using namespace std;
class complex
{
    float x, y;

public:
    complex()
    {}                              // for the objects which is not initialise like temp
    
    complex(float real, float imag)
    {
        x = real;
        y = imag; 
    }
    complex operator+(complex);
    void display();
};
void complex ::display()
{
    cout << x << " + j" << y << endl;
}

complex complex ::operator+(complex c)
{
    complex temp;
    temp.x = x + c.x;
    temp.y = y + c.y;
    return (temp); // OR

    // return complex((x+c.x),(y+c.x));
}
int main()
{
    complex C1, C2, C3;
    C1 = complex(2.5, 3.5);
    C2 = complex(1.6, 2.7);
    C3 = C1 + C2;

    cout << "C1 = ";
    C1.display();
    cout << "C2 = ";
    C2.display();
    cout << "C3 = ";
    C3.display();
    return 0;
}