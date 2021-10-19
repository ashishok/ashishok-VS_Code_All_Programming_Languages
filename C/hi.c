#include<stdio.h>
int main()
{
     int fact =1 ,i=1,num;
     printf(" enter the number whose factorial is to be find \n");
     scanf(" %d",&num);
     while(i<=num)
     {
          fact = fact*i;
        i++;
     }
     printf(" foactorial of the given number is %d",fact );
     return 0;
}