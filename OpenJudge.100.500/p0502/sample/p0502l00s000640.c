#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,m,flag=0;
    scanf("%d",&n);
    m=n;
    while(m--)
    {
        scanf("%d",&a);
        if(a%2==0)
        {
            if(a%3==0 || a%5==0)
                flag++;
        }
        else
            flag++;
    }
    if(flag==n)
        printf("APPROVED");
    else
        printf("DENIED");
    return 0;
}
