#include<stdio.h>
#define size 100000

int main()
{
    int ar[size];
    int h,n,s=0,i,j,k=0;
    scanf("%d",&h);
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);
    for(i=0;i<n;i++)
    {
        s=s+ar[i];
    }
    k=h-s;
    if(k<=0)
        printf("Yes\n");
    return 0;
}
