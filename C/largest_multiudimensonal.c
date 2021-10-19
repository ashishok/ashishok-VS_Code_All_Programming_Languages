 #include<stdio.h>
 int main()
 {
     int i,j,big;
      int th[5][5] = {
                            1,2,3,4,5,
                            6,7,8,9,99,
                            10,11,12,13,14,
                            15,16,17,18,19,
                            20,21,22,23,24

                            };
         big =th[0][0];
         printf(" the 5 & 5 matrix is  \n");
          for(i=0;i<=4;i++)
           {
               for (j=0;j<=4;j++)
                  {
                    //    printf(" here is %d ",th[i][j]);
                   if(th[i][j]>big)
                   big=th[i][j];}
                    // printf("\n");   

           }
           printf(" \n largest number in the nmatrix is %d \n",big);

  return 0;
 }
