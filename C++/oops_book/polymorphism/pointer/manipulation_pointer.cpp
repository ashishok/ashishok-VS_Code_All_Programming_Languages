#include <iostream>
using namespace std;
int main()
{
    int a, *ptr1;
    a = 10;
    ptr1 = &a;
    cout << " the value of a is " << a << endl;
    *ptr1 = *ptr1 / 2;
    cout << " the vlaue of a is :" << (*ptr1);
    return 0;
}