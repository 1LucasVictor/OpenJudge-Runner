#include<stdio.h>
int main()
{
  long int c;
    scanf("%ld",&c);

   long int A=c/500;
    long int ModA=c%500;
    long int B=ModA/5;

    long int C=(A*1000)+(B*5);

    printf("%ld\n",C);
    return 0;
}
