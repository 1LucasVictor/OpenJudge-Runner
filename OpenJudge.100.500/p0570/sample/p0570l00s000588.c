#include <stdio.h>

int a,b,C;


int main() {
 scanf("%d%d",&a,&b);
int c = (a + b)/2;
if ((a+b)% 2 == 0)
  printf("%d",c);
else 
 printf("IMPOSSIBLE");
 
 return 0;
}