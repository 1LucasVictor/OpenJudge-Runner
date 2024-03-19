#include <stdio.h>



int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    if(k%2 || (k>n*2 && k>n*4) || n>=k)
        printf("No");
    else
    {
        printf("Yes");
    }
    return 0;
}