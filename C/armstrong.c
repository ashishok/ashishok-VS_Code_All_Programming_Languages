#include<stdio.h>
int main()
{
    int m=21,p,c;
    while(1)
    {
         printf(" number of matches left =%d\n",m);
         printf(" pick up 1,2,3,4 matches ");
         scanf(" %d",&p);
         if( p>4 || p<1)
         continue;
          m= m-p;
          printf(" no of matches left %d\n",m);
          c=5-p;
          printf("out of which computer picked up is %d\n",c);
          m = m-c;

          if(m==1)
          {
              printf(" number of matches left %d\n",m);
              printf(" ypu lose the game\n ");
              break;
          }

    }
    return 0;
}