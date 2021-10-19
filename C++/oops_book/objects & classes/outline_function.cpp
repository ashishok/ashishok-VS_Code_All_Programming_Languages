#include<iostream>
using namespace std;
class item
{

    int number;
    float cost;
    public:
    void getdata(int a, float b);

};


inline void item::getdata(int a ,float b)
{
    number =a;
    cost =b;
}

int main()
{

return 0;
}