#include <stdio.h>

int main(){
  int a,b,sum,i,j;
  int count=0;
  while(1){
    count = 1;
    if(scanf("%d%d",&a,&b)==EOF)break;
    sum=a+b;
    while(1){
      if(sum/10==0)break;
      count++;
      sum/=10;
    }
    printf("%d\n",count);
  }
  
  return 0;
}

