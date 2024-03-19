#include <stdio.h>
int main(void){
  int a,b;
  int s;
  scanf("%d %d",&a,&b);
  s=a*b;
  
  if(s%2==0){
    printf("Even\n");
  }
  else{
    printf("Odd\n");
  }
  
  return 0;
}