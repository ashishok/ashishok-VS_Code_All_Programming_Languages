#include<iostream>
#include<array>
#include<vector>
using namespace std;
int main()
{
// int data [] = {1,2,3,4,5};
// vector<int> data = {1,2,3,4,5};
array<int,5> data = {1,2,3,4,5};

for (int n : data)
{
    cout<<n<<"\t";
}
return 0;
}
// all these cannot run if we create a function it will through an error 