// Zero division Error

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter the values of a and b \n";
    cin >> a >> b;
    int x = a - b;

    try
    {

        if (x != 0)
        {
            cout << "result(a/x) = " << a / x << endl;
        }
        else
        {
            throw(x); // throws an int object
        }
    }
    catch (int i) // cathches the exception
    {
        cout << "Exception found :  x = " << x << endl;
    }
    cout << "end";
    return 0;
}