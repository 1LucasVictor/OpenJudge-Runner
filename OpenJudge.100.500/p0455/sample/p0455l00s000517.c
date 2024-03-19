#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define ll long long int
int main()
{
   int N;
   scanf("%d",&N);

   int sum = pow(N,1) + pow(N,2) + pow(N,3);

   printf("%d",sum);

    return 0;
}
