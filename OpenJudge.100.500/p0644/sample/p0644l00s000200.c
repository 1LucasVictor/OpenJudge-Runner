#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int r = a / 100 + (a % 100) / 10 + (a%10);
    printf("%d", r);
    return 0;
}