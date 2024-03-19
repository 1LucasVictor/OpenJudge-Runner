#include<stdio.h>
int main ()
{
    int i,a,b;
    scanf("%d %d", &a, &b);
    int arr[b];
    for(i=1;i<=b;i++)scanf("%d",&arr[i]);
    for(i=1;i<=b;i++)a=a-arr[i];
    if(a<=0)
    printf("Yes\n");
    else printf("No\n");
}
