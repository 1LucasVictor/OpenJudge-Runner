#include<stdio.h>
#include<math.h>
int main()
{
    long long int A;
    double B;
    scanf("%lld\t%lf",&A,&B);
    printf("%.lf",(trunc)(A*B));
    return 0;
}
