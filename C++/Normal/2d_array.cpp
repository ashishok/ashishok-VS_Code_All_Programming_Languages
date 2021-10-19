#include<iostream>
#include<vector>
using namespace std;
int main()
{
 int grade[][3] =   // for vectors we can include    vector <vector<int>> grade =
{
    {1,2,3},
    {4,5,6},
    {7,8,9}
};

for(int r=0;r<3;r++)
{
    for(int c=0;c<3;c++)
    {
        cout<<grade[r][c]<<"\t";
    }
    cout<<"\n";
}

return 0;
}