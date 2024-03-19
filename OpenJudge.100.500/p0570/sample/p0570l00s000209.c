#include<stdio.h>
int main(void){
  int a,b;
  
  scanf("%d %d",&a,&b);
  if((a+b)%2==0){
    printf("%d",(a+b)/2);
    
  }else{
    printf("IMPOSSIBLE");
  }
  return 0;
}