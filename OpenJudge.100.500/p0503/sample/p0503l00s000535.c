#include <stdio.h>
#include <stdlib.h>
int A[200005]= {0};
int main()
{
    int N;
    scanf("%d",&N);
    int i,ii;
    int val;
    int flag=0;
    for(i=0; i<N; i++)
    {
        scanf("%d",&val);
        for(ii=0; ii<i; ii++)
        {
            if(A[ii]==val)
            {
                flag=1;
            }
        }

        if(flag==0)
        {
            A[i]=val;
        }
    }
    if(flag==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
