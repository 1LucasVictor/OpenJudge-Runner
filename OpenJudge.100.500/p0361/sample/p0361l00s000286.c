#include<stdio.h>
int main(void)
{
 int a;
 int b;
 int c;
 int d;
 scanf("%d", &a);
 b = a / 3600;
 c = (a % 3600) / 60;
 d = (a % 3600) % 60;
 printf("%d:%d:%d\n", b, c, d);
 return 0;
}
