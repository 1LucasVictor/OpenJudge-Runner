#include <stdio.h>

int main(){
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  
  a = a - b;
  if(a>=b) printf("0\n");
  else printf("%d",c-a);
  return 0;
}