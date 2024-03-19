#include<stdio.h>
int main(void){
   int n;
   int a;
   int b[100]; 
  
   scanf("%d",&n);
  
  for (a = 0; a < n; a++) { 
    scanf("%d", &b[a]); 
  }
 for (a = 0; a < n; a++) { 
   if (b[a] % 2 == 0 && b[a] % 3 != 0 && b[a] % 5 != 0) { 
     printf("DENIED"); 
     return 0; 
   } 
 } 
  puts("APPROVED");

  return 0;
}