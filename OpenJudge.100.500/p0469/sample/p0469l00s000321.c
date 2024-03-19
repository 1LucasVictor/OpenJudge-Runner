#include <stdio.h>
int main(){
  int k,a,b;
  scanf("%d%d%d",&k,&a,&b);
  if(a%k)
    a+(k-a%k)<=b?printf("OK\n"):printf("NG\n");
  else
    printf("OK\n");
  return 0;
}