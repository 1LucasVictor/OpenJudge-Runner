#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define df 0


int main(){
  int a,b;
  scanf("%d%d",&a,&b);
  if((a+b)&1)printf("IMPOSSIBLE\n");
  else  printf("%d",(a+b)/2);
  return 0;
}


/// confirm df==0 ///