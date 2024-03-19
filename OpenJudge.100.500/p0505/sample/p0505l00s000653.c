#include<stdio.h>
int main()
{
    int h,n,y=0,i,z;
    scanf("%d",&h);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&z);
        y=y+z;
    }
    if(h<y)

        printf("Yes");
    else
        printf("No");

}
