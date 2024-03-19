#include<stdio.h>
int main()
{
    int a, b, c, k, n1, n2, sum=0;
    scanf("%d %d %d %d", &a, &b, &c, &k);
    n1 = k-a;
    if(n1<=0) sum = a;
    else{
        sum = b>n1 ? a : a-(n1-b);
    }
    printf("%d", sum);
    return 0;
}
