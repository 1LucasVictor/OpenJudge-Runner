#include <stdio.h>
int main()
{
    long long int x;
    scanf("%lld", &x);
    long long int happiness=0;
    happiness = happiness + ((x/500)*1000);
    x = x%500;
    happiness = happiness + ((x/5)*5);
    printf("%lld", happiness);
    return 0;



}