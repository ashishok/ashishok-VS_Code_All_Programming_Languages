#include<stdio.h>
int main ()
{
     int a,b,sum,diff,product,remainder;
     float quotient;
     char operator;
     printf(" enter the two numbers \n");
     scanf(" %d%d",&a,&b);
     fflush(stdin);
     printf(" enter the operator \n");
    operator = getchar();
     switch(operator)
     {
         case '+':
             sum = a+b;
             printf("  sum is  %d",sum);
             break;
         case '-':
            diff = a-b;
            printf(" diff is %d",diff);
            break;
         case '*':
            product = a*b;
            printf(" product is %d",product);
            break;
         case '%':
            remainder = a%b;
            printf(" remainder is %d ",remainder);
            break;
         case '/':
            quotient = a/b;
            printf(" quotient is %d",quotient);
            break;

        default:
         printf( " not a  vallid opoerator ");
             
     
     }
     return 0;
      
}