#include<stdio.h>
#include<string.h>

int main()
{
    int x, a, sum = 0;

    //input
    scanf("%d", &x);

    a = x/500;
    sum = sum + (a*1000);
    x = x%500;

    a = x/5;
    sum = sum + (a*5);
    printf("%d\n", sum);


    return 0;
}
