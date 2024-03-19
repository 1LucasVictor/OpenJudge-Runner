#include<stdio.h>
#include<stdlib.h>
int main()
{
 unsigned long long int N,K;

 scanf("%llu%llu",&N,&K);
 N=abs((N-K));

 N=abs((N-K));

 if(N<=N && N<=6)
    printf("%llu\n",N);

 else
 printf("0\n");
 return 0;
}
