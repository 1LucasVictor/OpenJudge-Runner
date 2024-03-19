#include<stdio.h>
#include<math.h>
int main()
{
    int k, a, b;
    scanf("%d%d%d", &k, &a, &b);
    int check=(abs(a-b))/k;
    if(check>0 || k==1)printf("OK\n");
    else printf("NG\n");
    return 0;
}
