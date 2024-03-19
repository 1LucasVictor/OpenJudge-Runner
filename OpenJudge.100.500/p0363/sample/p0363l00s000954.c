#include <stdio.h>

int main(void) {
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a<=b&&b<=c)
printf("%d %d %d\n",a,b,c);
if(a>=b&&b>=c)
printf("%d %d %d\n",c,b,a);
if(a>=b&&a<=c)
printf("%d %d %d\n",b,a,c);
if(a<=b&&b>=c&&a>=c)
printf("%d %d %d\n",c,a,b);
return 0;
}
