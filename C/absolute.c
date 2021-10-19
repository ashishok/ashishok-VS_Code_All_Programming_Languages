#include <stdio.h>
int main()
{
    int n;
    printf(" enter the number \n");
    scanf(" %d", &n);
    if (n < 0)
    {
        n = n * -1;
        printf(" the absolute number the given number  is %d\n", n);
    }
    else         
        printf(" the given number  is already absuluted \n");

    return 0;
}