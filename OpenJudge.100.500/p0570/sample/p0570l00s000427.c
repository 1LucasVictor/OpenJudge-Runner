#include<stdio.h>

int main(){
  unsigned long a,b;
  scanf("%lu%lu",&a,&b);
  if((a+b)%2 == 1){
    printf("IMPOSSIBLE");
  }else{
    printf("%lu",(a+b)/2);
  }
  
  return 0;
}