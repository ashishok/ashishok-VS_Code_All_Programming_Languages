#include<iostream>
using namespace std;
void print_array(int array[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<"\t";
    }
}
int main()
{
const int SIZE = 10;
int guess[SIZE]  ;
int count=0;
for(int i=0;i<SIZE;i++)
{
    if(cin>>guess[i])
    {
    count++;
    }
    else
    {
        break;
    }
}
print_array(guess,count);
// cin.clear();

return 0;
}