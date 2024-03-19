#include <stdio.h>

int main(){
  int a,b,c,x,k=0;
  scanf("%d %d %d",&a,&b,&c);
  if(a>b)
    return 0;

  for(x=a;x<=b;x++){
    if(c % x == 0)
      k++;
  }
  printf("%d\n",k);
  return 0;
}