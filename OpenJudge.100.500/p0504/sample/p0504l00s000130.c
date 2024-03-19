#include <stdio.h>
int main()
{
    int h,a,x;
    scanf("%d%d",&h,&a);

    if(h<=a)
        printf("1");
    else if(h>a)
    {

            x=((h+(a-1))/a);
            printf("%d",x);

    }
    return 0;

}
