#include<stdio.h>
int main()
{
    int k,a[5],i;
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    scanf("%d",&k);
    if(a[4]-a[0]<=k)
        printf("Yay!\n");
    else
        printf(":(\n");
    return 0;
}