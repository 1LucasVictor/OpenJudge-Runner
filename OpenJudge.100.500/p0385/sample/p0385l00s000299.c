#include<stdio.h>


int main(){

  int x, sum, i;

  while(1){
    scanf("%d",&x);
    if(x==0) break;
    sum=0;
    sum+=x/1000;
    sum+=x%1000/100;
    sum+=x%100/10;
    sum+=x%10;
    printf("%d\n", sum);
  }

  return 0;
  
}