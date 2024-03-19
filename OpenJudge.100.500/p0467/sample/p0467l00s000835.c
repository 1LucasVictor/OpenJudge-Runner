#include<stdio.h>
int main()
{
    int a, b, c, k, n1, n2, sum=0;
    scanf("%d %d %d %d", &a, &b, &c, &k);
    n1 = k>a ? k-a : a-k;
    if(n1==0) sum = a;
    else{
        sum=a;
        n2 = b>n1 ? b-n1 : n1-b;
        sum=sum-n2;
    }
    printf("%d", sum);
    return 0;
}
