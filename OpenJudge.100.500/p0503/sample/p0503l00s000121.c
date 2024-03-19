#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,num[1000],j,m=0;;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
        if((i+1)<=(n-1))
        {

            if(num[i]==num[i+1])
            {
                m++;
            }
        }
        if(m>0)
            break;
    }
    if(m==0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
