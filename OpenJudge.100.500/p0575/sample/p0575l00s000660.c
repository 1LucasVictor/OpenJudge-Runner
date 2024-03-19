#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    if(x<y)
        printf("0");
    else if(x>=y)
        printf("10");
    return 0;
}