#include<stdio.h>
int main()
{
    int h,a,i=0;
    scanf("%d%d",&h,&a);
    if(h%a==0)
        printf("%d",h/a);
    else if(h%a!=0)
        printf("%d",(h/a)+1);
    else if(a>h)
        printf("1");

    return 0;

}
