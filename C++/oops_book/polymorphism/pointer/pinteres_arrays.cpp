#include <iostream>
using namespace std;
int main()
{
    int numbers[50], *ptr;
    int n, i;
    cout << " \n enter the count\n";
    cin >> n;
    cout << " enter the number one by one\n";
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
        ptr = numbers;
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (*ptr % 2 == 0)
            sum = sum + *ptr;
        ptr++;
    }
    cout << "\n\n sum of even numbers : " << sum;
    return 0;
}