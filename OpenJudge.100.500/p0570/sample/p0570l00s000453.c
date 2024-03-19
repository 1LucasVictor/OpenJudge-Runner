#include<stdio.h>
int main(void)
{
int a,b,k,swap;
scanf("%d %d",&a,&b);
if (a > b)
{
  swap = a;
  a = b;
  b = swap;
}
if (a > 0)
{
    a = -a;
}
if (b < 0)
{
    b = -b;
}
for (k = 0;k < b;k++)
{
    if (a+k == b-k)
    {
        break;
    }
}
if (a+k == b-k)
{
    printf ("%d",k);
}else{
    printf("IMPOSSIBLE");
}
return 0;
}