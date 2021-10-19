#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int a = 3;
    long long b = 12345678912345;
    char d = 'a';
    float e = 343.23;
    double h = 14049.30493;
    cout << "\n";
    cout << a << "\n"
         << b << "\n"
         << d << "\n"
         << e << "\n"
         << h << "\n";
    cout << fixed << setprecision(3) << e << '\n';
    cout << fixed << setprecision(9) << h << '\n';

    return 0;
}