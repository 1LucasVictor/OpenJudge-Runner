#include<stdio.h>

int main(void){
  int a,b,t,i,count;
  count=0;
  
  
  scanf("%d %d %d",&a,&b,&t);
  for(i=1;i<t+0.5;i++){
    if(i%a==0){
      count+=b;
    }
  }
  
  printf("%d",count);
  
  return 0;
}