#include <stdio.h>
#include <string.h>

int main()
{
    int a,b,c;

    scanf("%d %d", &a, &b);
    if (a >= 10 || b >= 10){
        printf("-1");
    } else {
        c = a * b;
        printf("%d",c);
    }
    return(0);
}