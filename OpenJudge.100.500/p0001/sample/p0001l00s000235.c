#include<stdio.h>

 int main ()
 {
     int n;
     int a,b;
     int j;
     while (scanf ("%d %d", &a, &b)!=EOF  )
     {
         j=0;
         n=a+b;
         while(n>0)
            {
                 n /=10;
                 j++;
            }
         printf("%d\n",j);
      }
    return 0;
 }