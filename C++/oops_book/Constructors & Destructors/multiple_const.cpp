#include <iostream>
using namespace std;

class complex
{
private:
   float x,y;

public:
    complex()
    { }
    complex(float a)
    { x=y=a;}
    complex(float real, float imag)
    {x = real;
    y = imag;
    }
    friend complex sum(complex, complex);
    friend void show(complex);
};

complex sum(complex c1 , complex c2)
{
    complex c3;
    c3.x = c1.x + c2.x;
    c3.y = c1.y + c2.y;
    return(c3);
}
 void show(complex c)
{
    cout<<c.x<<"\t"<<c.y<<"\t";
}
  
int main()
{
    complex A(2.3,3.5);
    complex B(1.4);
    complex C;

    C = sum(A,B);
    cout<<"mean value = ";show(A);
   cout<<"mean value = ";show(B);
   cout<<"mean value = ";show(C);

// another way to give values

    complex P,Q,R;  
    P = complex(1.5,6.8);
    Q = complex(5.5,3.9);
    R = sum(P,Q);
    cout<<endl;
    cout<<"mean value = ";show(A);
   cout<<"mean value = ";show(B);
   cout<<"mean value = ";show(C);
    return 0;
}