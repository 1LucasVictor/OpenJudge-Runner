#include<stdio.h>

int main()
{
    unsigned int a,b,c,k;
    scanf("%u %u %u %u",&a,&b,&c,&k);
    unsigned int out=0;
    if (k<=a) {
        out=k;
    } else {
        if (k<=a+b) {
            out=a;
        } else {
            out=a+b-c;
        }
    }
    printf("%u",out);
    return 0;
}