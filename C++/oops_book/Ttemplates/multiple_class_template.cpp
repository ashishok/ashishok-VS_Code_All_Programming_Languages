#include<iostream>
using namespace std;
template<class T1,class T2>
class test
{
    T1 a;
    T2 b;
    public:
    test(T1 x , T2 y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout<<a<< " and "<<b<<endl;
    }
};

int main()
{
 test <float, int > test1(1.23,123);
 test <float, char > test2(100,'w');

 test1.show();
 test2.show();
return 0;
}