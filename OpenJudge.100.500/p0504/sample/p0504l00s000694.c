#include <stdio.h>

int main(void)
{
    int h=0,a=0,count=0;
    scanf("%d %d",&h,&a);

    while(h>0){
        h-=a;
        count+=1;
    }
    printf("%d",count);
    return 0;
}
