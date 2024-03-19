
#include<stdio.h>

int main(void)
{
    long int d,n;
    int i;
    int a=1;
    scanf("%ld %ld",&d,&n);
    
    for(i=0;i<d;i++)
        a=a*100;
    
    printf("%ld",a*n);
    return 0;
}
