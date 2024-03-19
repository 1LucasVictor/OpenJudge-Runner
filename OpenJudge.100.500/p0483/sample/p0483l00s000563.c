#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int N, i;
    scanf("%d", &N);
    for(i=0;i<3;i=i+1)
    {
        if(N%10==7)
        {
            printf("Yes\n");
            break;
        }
        else
        {
            N=N/10;
        }
    }
    if(i==3)
    {
        printf("No\n");
    }
}