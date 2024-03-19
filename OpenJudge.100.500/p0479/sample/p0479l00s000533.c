#include<stdio.h>
int main()
{
    long long int N,i,C;
    int A[300000];
    scanf("%lld",&N);
    for(i=1;i<N;i++)
    {
        scanf("%lld",&C);
        A[C-1]++;
    }
    for(i=0;i<N;i++)
    {
        printf("%d\n",A[i]);
    }
    return 0;
}
