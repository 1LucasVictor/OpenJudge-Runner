#include<stdio.h>
#include<string.h>
int main()
{
    long long int yen;
    scanf("%lld",&yen);
    long long int remaind=(yen%500);
    printf("%lld",(((yen/500)*1000)+((remaind/5)*5)));
    
}