#include<stdio.h>
int main()
{
        int h,a,k;

        scanf("%d%d",&h,&a);

        k=h/a;

        if((h%a)>0)
                k=k+1;

        printf("%d\n",k);

        return 0;
}
