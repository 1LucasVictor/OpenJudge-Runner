#include<stdio.h>
int main(){
int i,n,a,b;
  scanf("%d%d",&a,&b);
  n=a-1;
  int count=0;
  for(i=0;i<n;i++)
    if(1+n*i<b)
      count++;
  printf("%d\n",count);
  return 0;
}