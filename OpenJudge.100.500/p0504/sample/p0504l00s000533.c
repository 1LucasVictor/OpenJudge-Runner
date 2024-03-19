#include<stdio.h>
int main()
{

    int h,a,count=0;
    scanf("%d%d",&h,&a);


        while(h>=1)
        {
            count++;
            h=h-a;

        }

    printf("%d",count);


}
