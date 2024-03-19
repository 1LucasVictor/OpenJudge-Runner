#include <stdio.h>

int main(void)
{
 int a, b, c;

 scanf("%d", &a);

 scanf("%d", &b);

 scanf("%d", &c);

 if (a <= b && b <= c)
 printf("%d %d %d\n", a, b, c);
 else if (a >= b && b >= c)
 printf("%d %d %d\n", c, b, a);
 else if (a >= c && a <= b)
 printf("%d %d %d\n", c, a, b);
 else if (a <= c && c <= b)
 printf("%d %d %d\n", a, c, b);
 else if (a >= c && c >= b)
 printf("%d %d %d\n", b, c, a);
 else if (c >= a && a >= b) 
 printf("%d %d %d\n", b, a, c);

 return 0;

}

