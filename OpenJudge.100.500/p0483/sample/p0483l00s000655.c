#include<stdio.h>
int main(void){
  int i,num;
  int flag=0;
  
  scanf("%d",&num);
  
  for(i=0;i<3;i++) {
    if(num%10==7) {
      flag=1;
    }
    num=num/10;
  }
  if(flag==1){
    printf("Yes");
  }else{
    printf("No");
  }
  return 0;
}