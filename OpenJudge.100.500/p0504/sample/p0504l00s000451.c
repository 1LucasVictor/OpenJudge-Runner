#include <stdio.h>
int main()

{
    int a,h,count=0,i;
    scanf("%d%d",&a,&h);

    for(i=a;;i-=h){
        count++;
        if(i<=0){
            break;
        }
    }
    printf("%d",count-1);

    return 0;
}
