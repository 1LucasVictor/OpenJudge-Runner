#include <stdio.h>
int main(void) {
   int i,n;
   int cha[100];

   scanf("%d", &n);
   for (i = 0; i < n; i++) {
       scanf("%d", &cha[i]); 
   }
   
   for (i = 0; i < n; i++) { 
       if (cha[i] % 2 == 0 && cha[i] % 3 != 0 && cha[i] % 5 != 0) { 
           puts("DENIED"); 
           return 0; 
       } 
   } 
   puts("APPROVED");

   return 0;
}