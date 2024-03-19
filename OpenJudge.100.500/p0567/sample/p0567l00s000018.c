#include <stdio.h>

int main(){
  int a,b,c,sum;
  scanf("%d %d %d",&a,&b,&c);
  
  sum = a - b;
  if(a == b )printf("%d",c);
  else if(sum>=b) printf("0\n");
  else printf("%d",c-sum);
  return 0;
}