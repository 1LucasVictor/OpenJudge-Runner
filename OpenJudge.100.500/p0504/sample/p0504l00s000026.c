#include<stdio.h>
int main()
{
    int h,a,b,c;
    scanf("%d %d",&h,&a);
    if(h<a)
        printf("1");
    else
    {
        b=h/a;
        c=h%a;
        if(c!=0)
            b++;

    }
    printf("%d",b);
    return 0;
}
