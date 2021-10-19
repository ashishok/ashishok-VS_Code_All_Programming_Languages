#include <iostream>
using namespace std;

void test(int x) throw(int, double)
{
    if (x == 0)
        throw 'x';
    else if (x == 1)
        throw x;
    else if (x == -1)
        throw 1.0;
    cout << "end of the function block\n";
}
int main()
{
    try
    {
        cout << "testing throw  restrictions \n";
        cout << "x ==0\n";
        test(0);
        cout << "x ==1\n";
        test(1);
        cout << "x ==-1\n";
        test(-1);
        cout << "x ==2\n";
        test(2);
    }
    catch (char c)
    {
        cout << "caught a character \n";
    }
    catch (int m)
    {
        cout << "caught an in integer  \n";
    }
    catch (char d)
    {
        cout << "caught a double \n";
    }
    cout << " end of the try-catch system \n\n";
    return 0;
}