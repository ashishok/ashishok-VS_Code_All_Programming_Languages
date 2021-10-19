#include<stdio.h>
#include<math.h>
int triangle(int *area,int ,int ,int  );
int main()
{
  int a,b,c,area;
  printf(" enter the three sides \n ");
  scanf("%d%d%d",&a,&b,&c);
   triangle(&area,a,b,c);
   printf(" area is %d",area);
   return 0;
}
int triangle(int *area,int a,int b,int c)
{
 float s,m;
 s=(a+b+c)/2;
 m= s*(s-a)*(s-b)*(s-c);
 *area =sqrt(m);

}