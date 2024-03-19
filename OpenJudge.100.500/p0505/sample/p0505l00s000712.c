#include<stdio.h>

int main()
{
    int H,N,A,temp=0,i;
    scanf("%d%d",&H,&N);
    for (i=0;i<N;i++)
    {
        scanf("%d",&A);
        H=H-A;
        if (H<=0)
        {
            temp=1;
        }
    }
    if (temp==1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

}
