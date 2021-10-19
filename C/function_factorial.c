 #include<stdio.h>
 int calfact(int x);
 int  main()
 {

     int i,fact;
     printf(" enter the numbers you want the factorial \n");
     scanf(" %d",&i);
     fact = calfact(i);
     printf(" factorial is %d",fact);
     return 0;
 }
 int calfact(int x)
 {
     int c,d=1;
     for(c=1;c<=x;c++)
     d = d*c;
     return (d);
 }