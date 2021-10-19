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




int add_user_if_not_exist(vector<user>&data,user me)
{
    for(int i=0;i<data.size();i++)
    {
        if(data[i].first_name == me.first_name && data[i].last_name == me.last_name)
        {
            return i;
        }
    }
    data.push_back(me);
    return data.size() - 1;
}

int main()
{
    //  user me;
    //  me.first_name = "ashish";

     vector<user>data;
     data.push_back(user());

    user me1 , me2 , me3;
    me1.first_name = "ashish";
    me1.last_name = "kumar";

    me2.first_name = "komal";
    me2.last_name = "raj";


    me3.first_name = "phool";
    me3.last_name = "don";

    data.push_back(me1);
    data.push_back(me2);
    data.push_back(me3);

    user me;
    me.first_name = "no";
    me.last_name = "raj";

    cout<<add_user_if_not_exist(data,me)<<endl;
    // cout<<data.size()<<endl;
    return 0;

}