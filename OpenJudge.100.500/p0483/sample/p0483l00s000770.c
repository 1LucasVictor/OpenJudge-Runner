 #include <stdio.h>

 int main (void)
 {
     int nb;

     scanf("%d",&nb);
     if (nb % 10 == 7 || (nb % 100 >= 70 || nb % 100 <- 79) ||
     (nb % 1000 >= 700 || nb % 1000 <- 799))
         printf("Yes");
     else
         printf("No");
     return 0;
 }