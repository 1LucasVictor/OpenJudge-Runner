#include<stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int higher = a+b;
    if(a-b>higher) higher=a-b;
    if(a*b>higher) higher=a*b;
    printf("%i\n",higher);
    return 0;
} 