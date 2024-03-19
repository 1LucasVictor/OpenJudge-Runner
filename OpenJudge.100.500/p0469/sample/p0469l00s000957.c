#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
typedef long long ll;

int main()
{

    int k,a,b,flag=0;
    scanf("%d %d %d",&k,&a,&b);

    for(int i=a;i<=b;i++)
    {
        if(i%k==0)
        {
            flag=1;
        }
    }

    if(flag==1)
    {
        printf("OK\n");
    }
    else
    {
        printf("NG\n");
    }
    

    return 0;
}