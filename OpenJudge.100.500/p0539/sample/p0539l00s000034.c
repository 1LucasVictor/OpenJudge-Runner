#include<stdio.h>
int main(void)
{
int n,a,b;
scanf("%d",&n);
for (a = 1;a <= 9;a++)
{
    for (b = 1;b <= 9;b++)
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