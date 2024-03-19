#include<stdio.h>

int main()
{
    int w,h,x,y,r;
    scanf("%d %d %d %d %d",&w,&h,&x,&y,&r);
    if(x<w && y<h && r<w && r<h)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;



}

