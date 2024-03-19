#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i,H,N;
    int sum=0;
    int *pntr;
    scanf("%d %d",&H, &N);
    pntr = (int*)malloc(N*sizeof(int));
    for(i=0; i<N ;i++)
    {
        scanf("%d",&pntr[i]);
        sum += pntr[i];
    }
    if(sum >= H)
    {
        printf("Yes");    
    }
    else
    {
        printf("No");
    }
    return 0;
}