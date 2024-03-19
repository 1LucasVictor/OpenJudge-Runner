#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    if (N%10==7) printf("Yes");
    else if (N%100-N%10==70) printf("Yes");
    else if (N-N%100==700) printf("Yes");
    else printf("No");
    printf("\n");
    return 0;
}