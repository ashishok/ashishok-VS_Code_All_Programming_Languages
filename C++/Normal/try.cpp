#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int  arr[5];
for(int i=0;i<=4;i++)
{
    arr[i] = pow(i+1,2);
}
for(int i=0;i<=4;i++)
{
cout<<arr[i]<<"\t";
}

return 0;
}