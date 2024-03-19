#include<stdio.h>
#include<string.h>
int main(void){
  int a,b,k,c=0;
  scanf("%d",&k);
  scanf("%d",&a);
  scanf("%d",&b);
  while(a<=b){
    if(a%k==0){
      c++;
    }
    a++;
  }
  if(c==0){
    printf("NG");
  }else if(c>=1){
    printf("OK");
  }
}