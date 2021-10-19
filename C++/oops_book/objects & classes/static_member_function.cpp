#include <iostream>
using namespace std;
class employee
{
    char name[30];
    float age;

public:
    void getdata();

    void putdata();
};
void employee::getdata()
{
    cout << "enter the name ";
    cin >> name;
    cout << "enter the age ";
    cin >> age;
}
void employee ::putdata()
{
    cout << name << endl;
    cout << age << endl;
}
const int size = 3;
int main()
{
    employee manager[size];
    for (int i = 0; i < size; i++)
    {
        cout << " \n details of the manager" << i + 1 << endl;
        manager[i].getdata();
    }
    cout << "\n";
    for (int j = 0; j < size; j++)

    {
        cout << "\n manger" << j + 1 << endl;
        manager[j].putdata();
    }

    return 0;
}