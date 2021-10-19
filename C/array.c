#include<stdio.h>
int main()
{ 
    int arr1[5],arr2[5],i,j;
    printf(" \n enter the 5 elements of an array \n");
    for(i=0;i<=4;i++)
    scanf(" %d",&arr1[i]);
    for(i=0,j=4;i<=4;i++,j--)
    arr2[j]=arr1[i];
    printf(" \n elements in revers ordeer \n");
    for(i=0;i<=4;i++)
    printf(" %d \n",arr2[i]);
    return 0;

}