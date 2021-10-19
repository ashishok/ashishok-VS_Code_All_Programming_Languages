#include<iostream>
using namespace std;
int count =0;
 class alpha
 {
     public:
        alpha()
        {
            count++;
            cout<<"no. of object created is "<<count<<endl;
        }
        ~alpha()
        {
            cout<<"no. of object destroyed is "<<count<<endl;
            count--;
        }
 };

int main()
{
alpha a,b,c,d;
{
    cout<<"\n enter the BLock1\n";
    alpha e;
}
{
cout<<" \nenter the block2 \n";
alpha f;
}
cout<<" \n re-enter the main \n";

return 0;
}