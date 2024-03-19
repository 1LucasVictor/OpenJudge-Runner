#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
  int a,b;
  long k;
  
  scanf("%d %d",&a,&b);
  
  k=(a+b)%2;
  
   if(k==0){
     k=(a+b)/2;
     printf("%d",k);
   }
  else{
    printf("IMPOSSIBLE");
  }
   return 0;
}