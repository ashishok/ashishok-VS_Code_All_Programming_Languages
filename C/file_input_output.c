#include<stdio.h>
int main()
{
     FILE *ptr;
     ptr = fopen("PR1.txt","r");
     char c = fgetc(ptr);
     
     while(c != EOF)
     {
     printf("%c",c);
     
    c = fgetc(ptr);
     
     
     }
     return 0;
}