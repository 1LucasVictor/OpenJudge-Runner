#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef long long ll;

int main()
{
     int n,a;
    scanf("%d",&n);

    if(n%10==7)
    {
        printf("Yes\n");
    }
    else
    {
        n=n/10;
        if(n%10==7)
        {
            printf("Yes\n");
        }
        else
        {
            n=n/10;
            if(n==7)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
        
    }
}