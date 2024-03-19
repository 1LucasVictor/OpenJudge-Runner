#include<stdio.h>
int main(void){
    int a,b;
    scanf("%d %d",&a,&b);
    a&b%2 ? printf("Odd\n") : printf("Even\n");
    return 0;
}