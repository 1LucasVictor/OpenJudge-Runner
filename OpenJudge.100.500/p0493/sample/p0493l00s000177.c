#include<stdio.h>
int main()
{
  long long  int c;
    scanf("%lld",&c);

   long long int A=c/500;
    long long int ModA=c%500;
    long long int B=ModA/5;

    long long int C=(A*1000)+(B*5);

    printf("%lld\n",C);
    return 0;
}
