#include<iostream>
#include<vector>
using namespace std;


void print_vector(vector <int> &data)  //&for call by reference  or  remove it
{
    // data.push_back(11);
    for(int i=0;i<data.size();i++)
    {
        cout<<data[i]<<"\t";
    }
    cout<<"\n";
}

int main()
{
vector<int> data={1,2,3,4};
print_vector(data);
print_vector(data);
print_vector(data);
return 0;
}