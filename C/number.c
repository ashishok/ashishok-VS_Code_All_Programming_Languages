#include<stdio.h>
int main()
{
     int num,n,pos = 0,neg = 0,zero = 0;
     printf(" enter the numbers \n");
     scanf(" %d",&n);
     printf("enter the %d numbers \n ",n);
     for(int i=1;i<=n;i++)
    
     {                                                 
         scanf("%d",&num);
     
         if(num<0)
         neg++;
        
         if(num>0)
         pos++;
        
         if(num==0)
         zero++;
     }
     printf(" neg is %d \n pos is %d\n zero is %d ",neg,pos,zero);
     return 0;
}
        
              
        
        
        

     