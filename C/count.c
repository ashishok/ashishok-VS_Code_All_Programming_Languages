#include<stdio.h>
int main()
{
    int pos,zero,neg,num;
    char ans= 'y';
    pos=neg=zero=0;
    while(ans == 'y' || ans == 'Y')
    {
        printf(" \n enter a number ");
        scanf(" %d",&num );

        if(num == 0)
        zero++;

        if(num > 0)
        pos++;

        if(num < 0)
        neg++;

        printf(" \n do you want to continue ?");
        scanf(" %c",&ans);

    }
    printf(" you entered %d positive numbers \n",pos);
    printf(" you entered %d negative numbers \n",neg);
    printf(" you entered %d zero numbers \n",zero);
    return 0;
}