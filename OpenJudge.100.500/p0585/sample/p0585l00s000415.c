#include<stdio.h>
int main(void)
{
    int a,b,t;
    int pro, bis;

    scanf("%d %d %d", &a, &b, &t);

    pro = (t + 0.5) / a;

    bis = b * pro;

    printf("%d", bis);

    return 0;

}


    