#include<stdio.h>

int main()

{
    int a, b, c ;

    scanf("%d %d %d", &a ,&b, &c) ;

    if(b+c>a)
    {
        printf("%d\n", (b+c)-a) ;
    }

    else if(a>b+c)
    {
        printf("0\n");
    }

    return 0;
}