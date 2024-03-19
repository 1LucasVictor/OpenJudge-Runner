#include<stdio.h>

int main(void){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);

    printf("%d\n",b%a+1);
    return 0;
}