#include <stdio.h>
int main(void)
{
    int h,a,d=0,i=0;

    scanf("%d%d",&h,&a);
    while(d<h){
        d+=a;
        i++;
    }
    printf("%d\n",i);
    return 0;
}