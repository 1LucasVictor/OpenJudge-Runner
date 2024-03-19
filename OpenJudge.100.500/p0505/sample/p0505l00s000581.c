#include <stdio.h>
int main(void)
{
    int h,n,i,sum = 0;
    scanf("%d%d",&h,&n);
    int a[100];
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        sum += a[i];
    }
    if(h <= sum)
        printf("Yes");
    else
        printf("No");
 
 
    return 0;
}