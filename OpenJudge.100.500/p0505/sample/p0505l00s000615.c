#include <stdio.h>
int main(void)
{
    int a,b,i,total=0;
    int c[200000];
    scanf("%d %d",&a,&b);
    for(i=0;i<b;i++)
    {
        scanf("%d",&c[i]);
    }
    for(i=0;i<b;i++)
    {
        total += c[i];
    }
    if(total >= a)
    {
        printf("Yes");
    }
    else if(total < a)
    {
        printf("No");
    }
    return 0;
}