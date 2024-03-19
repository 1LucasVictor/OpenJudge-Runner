#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
typedef long long ll;

int main()
{
    int a,b,ans;
    scanf("%d",&a);

    b=a;
    ans=a;
    a=a*b;
    ans=ans+a;
    a=a*b;
    ans=ans+a;

    printf("%d\n",ans);


    return 0;
}