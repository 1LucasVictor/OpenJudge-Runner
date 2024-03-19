#include<stdio.h>
int main(void){
  int a;
  scanf("%d",&a);
  if(a/100==7){
    printf("Yes");
  }else{
//    printf("No");
  }if(a%100/10==7){
    printf("Yes");
  }else{
//    printf("No");
  }if(a%100%10==7){
    printf("Yes");
  }else{
//    printf("No");
  }
  
  
  return 0;
}