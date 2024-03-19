#include <stdio.h>

int main()
{
    int H,N,re = 0;
    int A[100000];
    scanf("%d %d",&H,&N);
    for(int i = 0;i < N;i++)
    {
        scanf("%d",&A[i]);
        re += A[i];
    }
    if(H <= re)printf("Yes");
    else printf("No");
    return 0;
}