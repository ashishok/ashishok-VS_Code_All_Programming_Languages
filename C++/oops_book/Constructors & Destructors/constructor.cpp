#include <iostream>
using namespace std;

class integer
{
private:
    int m = 10, n = 20;

public:
    integer();
};

integer::integer()
{
    cout << "m =" << m << endl;
    cout << "n =" << n << endl;
}

int main()
{

    integer int1;   //or integer();
  
    return 0;
}