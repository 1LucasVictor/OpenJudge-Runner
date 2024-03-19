#include <stdio.h>

int main(void){
    int a,sum;
    scanf("%d",&a);
    sum=((int)(a/500))*1000;
    sum+=((int)((a%500)/5))*5;
    printf("%d",sum);
    return 0;
}