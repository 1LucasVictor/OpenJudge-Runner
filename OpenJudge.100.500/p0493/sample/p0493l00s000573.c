#include <stdio.h>

int main()
{
    int X;

    do{
        scanf("%d",&X);
    }while(X<0||X>1000000000);

    printf("%d",(X/500)*1000+((X%500)/5)*5);

    return 0;
}