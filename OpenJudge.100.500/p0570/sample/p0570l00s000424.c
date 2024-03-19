#include <stdio.h>
int a,b;
int main(void) {
scanf("%d%d",&a,&b);
int k=(a+b)/2;
if((a+b)%2==0)
printf("%d",k);
else
printf("IMPOSSIBLE");

return 0;
}