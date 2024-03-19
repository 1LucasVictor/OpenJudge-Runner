#include <stdio.h>

int main()
 {
    int a,b,p;
    scanf("%d %d",&a,&b);
    p= a*b;
    if (p%2==0)
        printf("Even");
    else
        printf("Odd");

    return 0;
 }
