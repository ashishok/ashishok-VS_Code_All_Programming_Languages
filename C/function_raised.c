#include<stdio.h>
int raised(int a,int b);
int main ()
{
    int a,b,power;
    printf(" enter a number \n");
    scanf(" %d%d",&a,&b);
    power = raised(a,b);
    printf(" %d raised to the power %d is %d",a,b,power);
    return 0;
}
int raised (int a,int b)
{
    int d=1,i;
    for(i=1;i<=b;i++)
    d= d*a;
    return (d);
}