#include <stdio.h>

int main()
{
    int d, n;
    
    scanf("%d %d", &d, &n);
    
    if(d==0&&n==100) printf("101");
    else if(d==0) printf("%d", n);
    if(d==1&&n==100) printf("10100");
    else if(d==1) printf("%d", 100*n);
    if(d==2&&n==100) printf("1010000");
    else if(d==2) printf("%d", 10000*n);

    return 0;
}