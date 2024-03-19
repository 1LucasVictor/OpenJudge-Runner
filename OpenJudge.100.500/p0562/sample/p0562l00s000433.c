#include<stdio.h>
int main(void)
{
    long int a,b,p=0,s=1;
    scanf("%ld%ld",&a,&b);
    p=a;
    while(p<b){
        p+=a-1;
        s++;
    }
    printf("%ld\n",s);
    return 0;
}