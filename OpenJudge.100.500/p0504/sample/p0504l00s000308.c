#include<stdio.h>

int main(void)
{

        int h,a,c=0;

        scanf("%d%d",&h,&a);
        while (h > 0){
        h=h-a;
        c++;
        }
        printf("%d\n",c);
        return 0;
}
