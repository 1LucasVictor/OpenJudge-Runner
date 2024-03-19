#include<stdio.h>
int main(void)
{
int n,a,b;
scanf("%d",&n);
for (a = 9;a > 0;a--)
{
    for (b = 9;b > 0;b--)
    {
        if (a*b == n)
        {
            break;
        }
    }
if (a*b == n)
{
    break;
}
}
if (a*b == n)
{
    printf("Yes");
}
else{
    printf("No");
}
return 0;
}