#include<stdio.h>

int main()
{
    long int a,b,c,k;
    scanf("%ld %ld %ld %ld",&a,&b,&c,&k);
    long int out=0;
    if (k<=a) {
        out=k;
    } else {
        if (k<=a+b) {
            out=a;
        } else {
            out=a+b-c;
        }
    }
    printf("%ld",out);
    return 0;
}