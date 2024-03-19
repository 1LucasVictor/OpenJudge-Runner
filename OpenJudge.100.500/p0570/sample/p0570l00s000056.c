#include <stdio.h>

int main(void) {
int a, b,k;
scanf("%d%d",&a,&b);
k=(a+b)/2;
if(2*k%2==0)
printf("%d\n",k);
else
printf("IMPOSSIBLE");
  return 0;
}