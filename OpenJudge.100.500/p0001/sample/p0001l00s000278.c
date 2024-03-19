#include <stdio.h>

int main()
{
 int a, b, len;
 while(scanf("%d%d", &a, &b)!=EOF){
  a += b;
  for(len=0; a>0; len++) a/=10;
  printf("%d\n", len);
 }
 return(0);
}