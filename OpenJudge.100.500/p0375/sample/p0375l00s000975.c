#include <stdio.h>

int main(){

 int n, i;

 scanf("%d\n", &n);
 i = 1;
 while(1)
 {
     if(i % 3 == 0)
     {
         printf(" %d", i);
     }
     else if(i % 10 == 3)
     {
         printf(" %d", i);
     }
     
     if(i == n) 
     {
         printf("\n");
         break;
     }
     
     i++;
 }

 return 0;
}