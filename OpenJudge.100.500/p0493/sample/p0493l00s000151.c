#include <stdio.h>

int main (void){

int a,b,c;
    scanf("%d",&a);
b = a/500;
c = (a-b*500)%5;

a = b*1000 + c*5;
    printf("%d",a);

    return 0;
}
