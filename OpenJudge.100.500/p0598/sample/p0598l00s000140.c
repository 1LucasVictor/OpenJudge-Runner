#include <stdio.h>

int main(void){
    int a,b;
    scanf("%d %d",&a, &b);
    printf("%d",b+((b%a==0)?a:-a));
    return 0;
}