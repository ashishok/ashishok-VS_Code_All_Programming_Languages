#include<stdio.h>
int main()
{
     int arr[]={2,3,4,-5,-6,-7,-8};
    int i, pos=0,neg=0,even=0,odd=0;
    for( i=0;i<=6;i++)
   
     {if(arr[i]%2==0)
     even++;      
     else
     odd++; 
       if(arr[i]>0)
     pos++;
     else
     neg++;}
     printf(" neg elements =%d\n",neg);
     printf(" positive elements =%d\n",pos);
     printf(" even elements =%d\n",even);
     printf(" odd elements =%d\n",odd);
    return 0;
}