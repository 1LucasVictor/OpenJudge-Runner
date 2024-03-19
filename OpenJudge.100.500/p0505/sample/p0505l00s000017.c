#include<stdio.h>
int main()
{
    int H,N,A,i;
    scanf("%d%d",&H,&N);
    if((H>=1 && H<=1000000000) && (N>=1 && N<=100000))
    {
        for(i=1;i<=N;i++)
        {
            scanf("%d",&A);
            if(A>=1 && A<=10000)
            {
                H=H-A;
            }
            else
                printf("Not within limit");
        }
        if(H<1)
            printf("Yes");
        else
            printf("No");
    }
    else
        printf("Not within limit ");
    return 0;
}
