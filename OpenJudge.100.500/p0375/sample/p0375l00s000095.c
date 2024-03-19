#include <stdio.h>
 
int main(void)
{
  int n = 0;
  int i;
  int x = 0;
   
  scanf("%d", &n);
   
  for(i = 1; i <= n; i++){
    x = i;
     
    if(x % 3 == 0)
      printf(" %d", i);
    else
      do{
    if(x % 10 == 3){
      printf(" %d", i);  
      break;
    }
      }while(x /= 10);
  }
  putchar('\n');
   
  return 0;
}