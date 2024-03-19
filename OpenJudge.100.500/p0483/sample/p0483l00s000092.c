#include<stdio.h>
int main()
{
    int n,ans,c=0;
    scanf("%d",&n);
    while(n!=0)
    {
        ans=n%10;
        if(ans==7)
        {
            c=1;
            break;
        }
        n/=10;
    }
    if(c==1)
    printf("Yes");
    else
    printf("No");
    return 0;
}