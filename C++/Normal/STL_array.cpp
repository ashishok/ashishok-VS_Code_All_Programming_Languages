#include<iostream>
#include<vector>
#include<array>
using namespace std;


void print_array(array <int, 20> data)  
{
    for(int i=0;i<data.size();i++)
    {
        cout<<data[i]<<"\t";
    }
    cout<<"\n";
}
int main()
{
    array<int,20> data = {1,2,3};
    print_array(data);

}