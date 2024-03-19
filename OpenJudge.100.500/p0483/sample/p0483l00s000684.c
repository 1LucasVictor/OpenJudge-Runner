#include <stdio.h>

int main(void){
  int n;
  
  scanf("%d", &n);
  
  while(n>0){
    if(n%10 == 7){
      printf("Yes");
      break;
    }
    n = n/10;
  }
   
  if(n == 0)
    printf("No");
  
  return 0;
}
