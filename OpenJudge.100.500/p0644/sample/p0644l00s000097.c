#include <stdio.h>

int main(void)
{
    int s,a=0;
    scanf("%d",&s);
    do{
        if(s%10==1)a++;
    }while(s/=10);
    printf("%d",a);
    return 0;
}