///BISMILLAH'IR  RO'HMANIR  ROH'IM
///RIFAT SHARIAR SAKIL
///SOFTWARE ENGINEERING(SUST)

#include<stdio.h>
int main()
{
    int N,i,j;
    scanf("%d",&N);
    for(i=9;i>=1;i--)
    {
        if(N%i==0)
        {
            j=N/i;
            if(j<=9)
            {
                printf("Yes");
            }
            else printf("No");
            break;
        }
    }
    return 0;
}
