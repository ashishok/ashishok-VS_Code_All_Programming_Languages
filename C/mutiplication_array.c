#include<stdio.h>
int main()
{ 
     int mat1[3][3]={ 
                1,2,3,
                4,5,6,
                7,8,9
              };
              int mat2[3][3] = {
                          3,4,5,
                          6,7,8,
                          3,2,1
                         };
                         int mat3[3][3];
                         int i,j,k,sum;

        for(i=0;i<=2;i++)                 
        {
             for(j=0;j<=2;j++)
             {
                  sum=0;
                  for(k=0;k<=2;k++)
                  sum=sum+mat1[i][k]*mat2[k][j];
                  mat3[i][j]=sum;

             }

        }
        printf(" the new matrix after multiply is  --->\n ");
        for(i=0;i<=2;i++)
        {
             for(j=0;j<=2;j++)
             printf(" %d \t ",mat3[i][j]);
          printf("\n");
        }
 return 0;       
}