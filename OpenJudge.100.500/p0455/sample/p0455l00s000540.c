#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d",&a);
    if(1<=a<=10){
        printf("%d",a+(a*a)+(a*a*a));
    }
    else
    scanf("%d",&a);
    return 0;
}