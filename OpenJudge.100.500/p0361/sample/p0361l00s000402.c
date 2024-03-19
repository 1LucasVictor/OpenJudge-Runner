#include <stdio.h>
int main()
{

int s;
scanf ("%d",&s);
int h = s/3600;
int h1 = s%3600;
int m = h1/60;
int m1 = h1%60;

printf("%d:%d:%d\n",h,m,m1);

return 0;
}
