#include<stdio.h>   //A - Biscuit Generator

int main(){

    int a,b,t;
    scanf("%d %d %d",&a,&b,&t);
    int sum  = (t/a)*b;
    printf("%d\n",sum);

    return 0;
}