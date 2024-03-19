#include<stdio.h>
int main(void)
{
        int h, a, b;
        scanf("%d%d",&h,&a);
        b=h/a;
        if(h%a!=0) b+=1;
        printf("%d\n",b);
        return 0;
}