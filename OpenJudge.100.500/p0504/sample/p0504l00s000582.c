#include<stdio.h>
int main()
{
    int h,a,y=0;
    scanf("%d %d",&h,&a);
    while(h>0){
        h=h-a;
        y++;
    }
    printf("%d",y);
    return 0;
}