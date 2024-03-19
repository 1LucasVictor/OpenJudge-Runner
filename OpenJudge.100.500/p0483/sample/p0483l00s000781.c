#include <stdio.h>
 
int main(void){
  
  int n, a, b, c, f;
  
  scanf("%d", &n);
  
  a = n%10;
  b = ((n-a)%100)/10;
  c = ((n-a-b*10)%1000)/100;
  
  if((a==7) || (b==7) || (c==7)){
    printf("Yes");
  }else{
    printf("No");
  }
  return 0;
 
}