#include<stdio.h>
//char str[1000000];

int main()
{
    long long a,b,c,d,n,big,small,k,i;
    scanf("%lld%lld%lld%lld%lld",&n,&a,&b,&c,&d);
    char str[n];
    scanf("%s",str);
    if(a>b)
    {
    big=a;
    small=b;
    }
    else
    {
    big=b;
    small=a;
    }
    k=big-small;
   if(k==1)
    if(str[big]=='#')
    {
    printf("No");
    return 0;
    }
    else if(k==2)
    if(str[small]=='#')
    {
    printf("No");
    return 0;
    }
    for(i=0;i<n;i++)
    if(str[i]=='#')
    if(str[i+1]=='#')
    if(i<(c-1)&&i<(d-1))
    {
    printf("No");
    return 0;
    }
    printf("Yes");
}