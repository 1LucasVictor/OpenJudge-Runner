#include<stdio.h>

int main() 
{
    long int a,b,c,k,sum=0;
    scanf("%ld %ld %ld %ld",&a,&b,&c,&k);
    for(int i=1;i<=a && k>0;i++,k--)
    {
        sum+=1;
    }
    for(int i=1;i<=b && k>0;i++,k--)
    {
        sum=sum+0;
    }
    for(int i=1;i<=c && k>0;i++,k--)
    {
        sum+=(-1);
    }
    printf("%ld\n",sum);
}    
    