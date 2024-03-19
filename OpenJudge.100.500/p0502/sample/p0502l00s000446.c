#include<stdio.h>
int A[1001];
int main()
{
    int N,c=1;

    scanf("%d",&N);

    for(int i=0;i<N;i++)
    {
        scanf("%d",&A[i]);

    }

    for(int i=0;i<N;i++)
    {

        if(A[i]%2==0)
        {
            if(A[i]%3!=0 && A[i]%5!=0)

            c=0;
        }
    }
    if(c==1)
        printf("APPROVED");
    else
        printf("DENIED");

    return 0;
}
