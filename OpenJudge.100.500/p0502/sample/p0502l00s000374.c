#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,a[1000],count=0,count1=0;
    scanf("%d\n",&N);
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    for(i=0;i<N;i++)
    {
        if(a[i]%2==0)
        {
            count++;
             if(a[i]%3==0||a[i]%5==0)
                count1++;
        }
    }
    if(count==count1)
        printf("APPROVED");
        else printf("DENIED");
    return 0;
}
