#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int>data={1,2,3,5};
data.push_back(12);
cout<<data[data.size()-1]<<endl;
data.pop_back();
cout<<data.size()<<endl;

return 0;
}