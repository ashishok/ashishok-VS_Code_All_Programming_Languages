#include <iostream>
#include <vector>
using namespace std;

class user
{
    string status = "single";

public:
    string first_name;
    string last_name;
    string get_status()                  //getter
    {
        return status;
    }
    void set_status(string status)        //setter
    {
        if (status == "double" || status == "none" || status == "bingo")
        {
            this->status = status;
        }
        else
        {
             this->status = "no status";
        }
    }
    user()
    {

    }

    user(string first_name, string last_name, string status)
    {
        this->first_name = first_name;
        this->last_name = last_name;
        this->status = status;
    }
    ~user()
    {
        cout << "destructor" << endl;
    }
};

int main()
{
    user me;
    me.set_status("tacos");
    cout << me.get_status() << endl;
    // cout << me.first_name << endl;
    // cout << me.last_name << endl;
    return 0;
}