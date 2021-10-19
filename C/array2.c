#include<stdio.h>
int main()
{
     int arr[5],i,n;
    printf(" enter the 25 elements of the array \n ") ;
    for(i=0;i<=4;i++)
    scanf(" %d",&arr[i]);
    n = *arr;
    for(i=0;i<=4;i++)
    {
        if((arr[i])<n)
        n =(arr[i]);

    }
    printf(" smallest number  is %d \n",n);
    return 0;
}