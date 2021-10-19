#include<iostream>
#include<vector>
using namespace std;


void print_vector(vector <int> data)
{
    for(int i=0;i<data.size();i++)
    {
        cout<<data[i]<<"\t";
    }
    cout<<"\n";
}

int main()
{
vector<int> data ;
    int guess;
while(guess != 5)
{
    cin>>guess;
    data.push_back(guess);
}
print_vector(data);
return 0;
}