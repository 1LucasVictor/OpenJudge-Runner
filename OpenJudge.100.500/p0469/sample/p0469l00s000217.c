#include <stdio.h>

int main(void) {

  int k,a,b,i,flag=0;

  scanf("%d%d%d", &k,&a,&b);

  for(i=1;i<=b;i++){
    if(i*k>=a && i*k<=b) flag=1;
  }
  if(flag==1) printf("OK");
  else printf("NG");

  return 0;
}
