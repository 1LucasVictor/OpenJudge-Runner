#include<stdio.h>
int main()
{
    int K, A, B, i, count;
    scanf("%d", &K);
    scanf("%d %d", &A, &B);

    for(i=A; i<=B; i++)
    {
        if(i%K==0)
        {
            count=1;
            break;
        }
    }
    if(count==1)
    {
        printf("OK\n");
    }
    else
    {
        printf("NG\n");
    }
    return 0;
}
