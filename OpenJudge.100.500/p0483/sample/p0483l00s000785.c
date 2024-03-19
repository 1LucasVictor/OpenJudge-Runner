#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    while(N)
    {
        if(N%10==7)
        {
            printf("Yes\n");
            return 0;
        }
        N=N/10;
    }
    printf("No\n");
    return 0;
}
