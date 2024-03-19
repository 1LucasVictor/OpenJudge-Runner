#include<stdio.h>
int main()
{
    int K,A,B,i,C,d=0;

    scanf("%d%d%d",&K,&A,&B);
    for(i=1; i<=B; i++)
    {
        C=K*i;
        if(A<=C && C<=B)
        {
            printf("OK");
            d++;
            break;
        }

    }
   if(d==0)
        printf("NG");

    return 0;
}