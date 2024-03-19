#include<stdio.h>
#include<stdlib.h>

int main()
{
  int n,k,x;
  scanf("%d %d", &n,&k);
  if(n%k==0) puts("0");
  else{
  while(1){
    x=abs(k-n);
    if(x>abs(k-x)){
      n=x;
    }
    else break;
  }
  printf("%d\n",abs(k-n));}
  return 0;
}