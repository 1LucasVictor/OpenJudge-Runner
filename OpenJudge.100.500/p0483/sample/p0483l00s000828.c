#include<stdio.h>
int main(void){
  int n;
  scanf("%d", &n);
  if(700<=n&&n<=799){
    printf("Yes");
  }
  else if(n%10==7){
    printf("Yes");
  }
  else if(70<=n%100 && n%100<=79){
    printf("Yes");
  }
  else{
    printf("No");
  }
  return 0;
}
    
