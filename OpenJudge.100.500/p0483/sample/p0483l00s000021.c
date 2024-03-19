#include <stdio.h>

 int main (void)
 {
     int N;

     if (scanf("%d",&N) == 1);
     if (N < 100 || N > 999)
         return 0;
     if (N % 10 == 7 || (N % 100 >= 70 || N % 100 <= 79) ||
     (N % 1000 >= 700 || N % 1000 <= 799))
         printf("Yes\n");
     else
         printf("No\n");
     return 0;
 }