#include<stdio.h>
int main()
{
    long long int a,b,i,flag=0;
    scanf("%lld%lld",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(abs(a-i)==abs(b-i))
        {
            printf("%lld\n",i);
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("IMPOSSIBLE\n");
    }

}