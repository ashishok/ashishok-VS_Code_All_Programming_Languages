#include <iostream>
using namespace std;

struct user
{

    string first_name;
    string last_name;
    string get_status()
    {
        return status;
    }

private:
    string status = "single";
};

int main()
{

    user me;
    me.first_name = "ashish ";
    me.last_name = "kumar";

    cout << "first name:" << me.first_name << endl;
    cout << "last name:" << me.last_name << endl;
    cout << "status:" << me.get_status() << endl;

    return 0;
}