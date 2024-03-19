#include <stdio.h> 

int main(void)
{
    // int x;
    // scanf("%d", &x);
    // printf("%d\n", x);

    // long x;
    // scanf("%ld", &x);
    // printf("%ld\n", x);

    // char array[x];
    int k, a, b, ret=0, cnt=1;
    scanf("%d", &k);
    scanf("%d", &a);
    scanf("%d", &b);
    
    while (ret < a) {
        ret = (cnt++) * k;
        //printf("%d\n", ret);
    }

    if (ret <= b)
        printf("OK");
    else 
        printf("NG");

    return 0;
}