#include<stdio.h>
#include<math.h>

int main()
{
 float a,b,c,r,area;
 printf(" \n enter the side of the triangle \n"); 
 scanf(" %f,%f,%f",&a,&b,&c);
 r = (a+b+c)/2;
 area = sqrt(r*(r-a)*(r-b)*(r-c));
 printf(" area of the triangle is = %f \n",area);
 return 0;

}