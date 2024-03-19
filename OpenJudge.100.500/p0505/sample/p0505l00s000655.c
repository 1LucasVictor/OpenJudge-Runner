#include<stdio.h>
int main()
{

    int h,n,i=0,sum=0;
    scanf("%d %d",&h,&n);
    int a[n];
    while(i<n)
    {

        scanf("%d",&a[i]);
        sum+=a[i];
        i++;
    }

    if(sum>=h)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;

}
