#include <stdio.h>

int main(void)
{
 int a, b, c,e ;
 double d;
 scanf("%d", &a);
 scanf("%d", &b);
 scanf("%lf", &d);
if(a > d) {
printf("0");
return 0;
}
 d = d + 0.5;
 e = d / a;
 c = e * b;
 printf("%d", c);
 return 0;
}