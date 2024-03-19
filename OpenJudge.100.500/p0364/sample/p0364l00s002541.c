#include<stdio.h>
int main()
{
    int w,h,x,y,r;
    scanf("%d%d%d%d%d",&x,&y,&w,&h,&r);
    if(x>=r && y>=r && (w-x)<=r && (h-y)<=r)
        printf("Yes\n");
    else
         printf("No\n");
}

