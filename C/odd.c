#include<stdio.h>
int main()
{ 
    int a,b,c,d;
    
printf(" enter the all the angles of the triangle\n ");
scanf(" %d%d%d",&a,&b,&c);
d= a+b+c;
if(d==180) 
  printf(" thhis triangle is valid ");
  else 
  printf(" this  tringle is not valid ");
  return 0;



    }