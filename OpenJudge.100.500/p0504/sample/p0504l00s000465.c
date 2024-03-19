//写一个将二维数组传入函数的函数
#include<stdio.h>
int main(void)
{
    int h,a,f=0,count;
    scanf("%d%d",&h,&a);
    count=a;
    for(f=1;a*f<h;f++)
        ;
    printf("%d",f);
    return 0;
}