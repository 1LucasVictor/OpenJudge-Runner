#include<stdio.h>
#include<stdlib.h>

int main(void){
   int n,i,result=0;
  
  scanf("%d",&n);
  while(n>0){
  	if(n % 10 == 7)result = 1;
    n/=10;
  }
  if(n==7) result = 1;
  if(result==1) printf("Yes");
  else printf("No");
  return 0;
}