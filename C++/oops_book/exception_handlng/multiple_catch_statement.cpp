#include <iostream>
using namespace std;

void test(int x)
{
    try
    {
        if (x == 1)
            throw x;
        else if (x == 0)
            throw 'x';
        else if (x == -1)
            throw 1.0;
        cout << "end of the try-block \n";
    }
    catch (char c)
    {
        cout << "caught a character \n";
    }
    catch (int m)
    {
        cout << "caught an integer \n";
    }
    catch (double d)
    {
        cout << "caught a double \n";
    }
    cout << "end of try-catch system \n\n";
}

int main()
{
    cout << "testing the multiple catches \n";
    cout << "x == 1\n ";
    test(1);
    cout << "x == 0 \n ";
    test(0);
    cout << "x == -1\n ";
    test(-1);
    cout << "x == 2 \n ";
    return 0;
}