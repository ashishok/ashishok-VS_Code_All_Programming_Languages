#include<iostream>
using namespace std;
int main()
{
int num[] = {56,75,22,18,90 };
int *ptr,i;
cout<<" the array values are \n";
for(int i=0;i<5;i++)
{
    cout<<num[i]<<endl;
}
ptr = num;
cout<<"\n values of ptr :"<<*ptr<<endl;
ptr++;
cout<<" \n vlaue of ptr :"<<*ptr<<endl;
ptr--;
cout<<"\n values of ptr :"<<*ptr<<endl;
ptr = ptr+2;
cout<<"\n values of ptr :"<<*ptr<<endl;
ptr = ptr-1;
cout<<"\n values of ptr :"<<*ptr<<endl;
ptr+=3;
cout<<"\n values of ptr :"<<*ptr<<endl;
ptr -=2;

return 0;
}