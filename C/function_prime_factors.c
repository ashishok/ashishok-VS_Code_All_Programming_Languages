#include<stdio.h>
void prime(int);
int  main()
{
    int num;
    printf(" enter the numbern");
    scanf(" %d",&num);
    prime(num);
    return 0;
    

}
void prime(int num)
{
     int i=2;
     printf(" prime factors of %d are ",num);
     for(i;num!=1;)
     {
         if(num%i==0)
         printf(" %d",i);
         else
         {
             i++;
             continue;
         }   
       
             num=num/i;
     }
}