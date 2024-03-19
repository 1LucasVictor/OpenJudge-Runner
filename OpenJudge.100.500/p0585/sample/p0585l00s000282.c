#include<stdio.h>
int main(){
    int a,b,t;
    scanf("%d %d %d", &a, &b, &t);
    printf("%d\n", (((2*t+1)/2)/a)*b);
    return 0;
}