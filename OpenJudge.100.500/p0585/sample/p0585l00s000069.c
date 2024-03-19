/*problem A*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
  int a,b,t;
  int count=0;
  scanf("%d %d %d",&a,&b,&t);

  for(int i=a;i<t+0.5;i = i+a){
    count+=b;
  }

  printf("%d",count);
  return 0 ;
}