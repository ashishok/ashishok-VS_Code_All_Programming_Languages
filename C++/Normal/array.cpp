#include<iostream>
using namespace std;
int main()
{
int guess[] = {12,43,56,67,34};
int size = sizeof(guess)/sizeof(guess[0]);
cout<<size<<endl;
for(int i=0;i<size;i++)
{
    cout<<guess[i];
}
return 0;
}