#include <iostream>
#include <cstdio>
using namespace std;

void greet(int a, int b , int c , int d)
{

  if((a>b)&&(a>c)&&(a>d))
     {cout<<a;}

     else
     {
         if((b>c)&&(b>d))
         {cout<<b;}
         else
         {
             if(c>d)
             {cout<<c;}
             else
             {cout<<d;}
         }
     }
    
}



int main() {
    int largest,a, b, c, d;
   cin>>a>>b>>c>>d;
   greet(a,b,c,d);
    return 0;
}