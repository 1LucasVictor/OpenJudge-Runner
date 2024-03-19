#include <stdio.h>
#include <stdlib.h>

int caluc(int a, int b, int t){
    return t/a * b;
}

int main(int argc, char *argv[])
{
    int a, b, t;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&t);

    printf("%d", caluc(a,b,t));
    return 0;
}
