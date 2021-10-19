#include <iostream>
#include<vector>
using namespace std;

class user
{
    string status = "single";

public:
    string first_name;
    string last_name;
    string get_status()
    {
        return status;
    }
};


int main()
{
     user me;
     me.first_name = "ashish";

     vector<user>data;
     data.push_back(me);

     cout<<data[0].first_name<<endl;
     return 0;
}