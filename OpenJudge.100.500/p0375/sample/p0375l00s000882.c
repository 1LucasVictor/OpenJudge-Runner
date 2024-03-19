#include <stdio.h>
      
void call(int n);
      
int main(void){
      
  int n;
      
  scanf("%d",&n);
  call(n);
  return 0;
}
  
void call(int n){
     
  register int i,s;
  int x;
  int digit = 0;
     
  for(i = 3;i <= n;i++){
    if(i % 3 == 0){
      printf(" %d",i);
    }else{
      x = i;
      while(x != 0){ 
        x = x / 10;
        digit++;
      }
      x = i;
      for(s = 0;s < digit;s++){
        if (x % 10 == 3){
          printf(" %d",i);
        }
        x /= 10;
      }
    }
  }
  printf("\n");
}