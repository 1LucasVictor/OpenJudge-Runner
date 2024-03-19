#include<stdio.h>

int main()
{
    long int n;
    scanf("%ld",&n);
    int count_500 = n/500;
    int count_5;
    if(n%500>=0)
    {
        count_5 = (n%500)/5;
    }
    printf("%d\n",1000*count_500+5*count_5);
    return 0;
}