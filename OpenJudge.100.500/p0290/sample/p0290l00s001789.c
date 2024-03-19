#include<stdio.h>
#define MAX 10000

int isPrime(int x);//?´???°????????????????????§????????????????????????

int main()
{
        int n;
        int integer[MAX];
        int i, cnt;

        scanf("%d", &n);
        for(i=0; i<n; i++)scanf("%d", &integer[i]);

        cnt = 0;
        for(i=0; i<n; i++)if(isPrime(integer[i])==1)cnt++;

        printf("%d", cnt);

        return 0;
}

int isPrime(int x)
{
        int i;
        for(i=2; i<x; i++)if(x%i==0)return 0;
        return 1;
}