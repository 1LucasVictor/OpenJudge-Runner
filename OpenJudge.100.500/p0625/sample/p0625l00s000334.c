#include<stdio.h>

#define N 16

int main(void)
{
    int a,b;

    scanf("%d %d",&a,&b);

    if(a+b > N || a > 8 || b > 8){
        puts(":(");
    } else {
        puts("Yay!");
    }

 return 0;
}