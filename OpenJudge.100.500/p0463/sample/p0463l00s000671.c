#include<stdio.h>
int main(){
int a;
scanf("%d", &a);
  
  if(a%10==3){
    printf("bon\n");
    return 0;
  }
  
  if(a%10==0||a%10==1||a%10==6||a%10==8){
    printf("pon\n");
    return 0;
  }

printf("hon\n");
return 0;
}
