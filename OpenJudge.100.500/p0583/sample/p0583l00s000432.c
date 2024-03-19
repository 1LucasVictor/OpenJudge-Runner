#include<stdio.h>
char str[1000000];

int main()
{
    long long a,b,c,d,n,big,small,k,i,max;
    scanf("%lld%lld%lld%lld%lld",&n,&a,&b,&c,&d);
  
    scanf("%s",str);
    if(c>d)
     max=d;
    else
    max=c;
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
    
    
    else if(str[max]=='#')
    {
    printf("No");
    return 0;
    }
    else if(str[max-2]=='#')
    {
    printf("No");
    return 0;
    }
    for(i=0;i<n;i++)
    if(str[i]=='#')
    if(str[i+1]=='#')
    if(i<(c-2)&&i<(d-2))
    {
    printf("No");
    return 0;
    }
   
    printf("Yes");
}