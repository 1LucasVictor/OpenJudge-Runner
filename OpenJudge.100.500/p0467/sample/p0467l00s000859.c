#include<stdio.h>
int main()
{
     int a,b,c;
     long long int k;
    scanf("%d%d%d%lld",&a,&b,&c,&k);
    int sum;
    if(k<=a)
    sum=k;
   else if((k>a)&&(k<=a+b))
    sum=a;
   else if((k>(a+b))&&(k<(a+b+c)))
    sum=a-(k-a-b);
    else if(k==a+b+c)
    sum=a-c;
    printf("%d",sum);
    return 0;
    
    
}