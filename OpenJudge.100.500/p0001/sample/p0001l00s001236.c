#include<stdio.h>
int main()
{
    long long int a,b,s,c;
    while(scanf("%lld %lld",&a,&b)!=EOF){
    s=a+b;
    c=0;
    while(s!=0){
        s=s/10;
        c++;
    }
    printf("%lld\n",c);
        }
        return 0;
}