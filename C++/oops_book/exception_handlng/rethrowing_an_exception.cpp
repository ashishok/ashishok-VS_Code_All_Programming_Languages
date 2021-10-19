#include<iostream>
using namespace std;

void divide(double x,double y)
{
    cout<<"inside the function \n";
    try 
    {
        if (y==0.0)
        throw y;
        else
        cout<<"division  = "<<x/y<<endl;
    }
    catch(double e)
    {
        cout<<"caught doble inside the functin \n";
        throw;
    }
    cout<<"end of the function \n\n";
}
int main()
{
cout<<"inside the main \n ";
try 
{
    divide(10.5,2.0);
    divide(20.0,0.0);

}
catch(double e)
{
    cout<<"caught double indsde the main \n";
}
return 0;
}