#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp =a;
    a=b;
    b=temp;
    cout<<"a:" <<a<<   "\tb:"  <<b  << "\n";
}
void swap(string &a, string &b)
{
    string temp = a;
    a=b;
    b=temp;
}

int main()
{
int a=10;
int b=20;
string name ="ashish";
string game = "kumar";

swap(a,b);
swap(name,game);

cout<<name<<" "<<game<<endl;
cout<<"a:"<< a << "\tb:" << b <<endl;

return 0;
}
