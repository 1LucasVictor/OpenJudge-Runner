#include<stdio.h>
int main(){
  int a,b,c,k,count;
  scanf("%d%d%d%d",&a,&b,&c,&k);
  if(a>=k)
    count=k;
  else if(a+b>=k)
    count=a;
  else
    count=2*a+b-k;
  printf("%d\n",count);
  return 0;
}
