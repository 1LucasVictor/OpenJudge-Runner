#include <stdio.h>
#include <stdlib.h>

void main(void)
{
  int sum=0,a,i,b,c[200000]={0};
  scanf("%d",&a);
  for(i=1;i<a;i++){
    scanf("%d",&b);
    c[b-1]+=1;
  }
  for(i=0;i<a;i++){
    printf("%d\n",c[i]);
  }
}