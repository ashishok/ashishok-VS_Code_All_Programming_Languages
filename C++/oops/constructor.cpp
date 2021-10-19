#include <iostream>
#include <vector>
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
    user()
    {
        cout << "constructor\n";          //implicit constructor can be ignore here
    }
    user(string first_name, string last_name, string status)
    {
        this->first_name = first_name;             // explicit constructor
        this->last_name = last_name;
        this->status = status;
    }
    ~user()
    {
        cout << "destructor" << endl;             //destructor
    }
};

int main()
{
    user me("ashish", "kumar", "singo");
    cout << me.first_name << endl;
    cout << me.last_name << endl;
    cout << me.get_status() << endl;
    return 0;
}