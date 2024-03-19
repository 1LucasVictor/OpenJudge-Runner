 #include <stdio.h>

 int main (void)
 {
     int N;

     scanf("%d",&N);
     if (N < 100 || N > 999)
         return 0;
     if (N % 10 == 7 || (N % 100 >= 70 || N % 100 <= 79) ||
     (N % 1000 >= 700 || N % 1000 <= 799))
         printf("Yes");
     else
         printf("No");
     return 0;
 }