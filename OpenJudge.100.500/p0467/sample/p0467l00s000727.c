#include <stdio.h>

int main(void)
{
    int a=0,b=0,c=0,k=0,max=0;
    scanf("%d %d %d %d",&a,&b,&c,&k);

    if(k<=a){
        max=k;
    }
    else if(k<=a+b){
        max=a;
    } else {
        max=a-(k-a-b);
    }

    printf("%d",max);
    return 0;
}
