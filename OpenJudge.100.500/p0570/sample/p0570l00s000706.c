#include<stdio.h>

int main()
{
    int a,b,k;
    scanf("%d%d", &a,&b);

    int res= (a+b);
    if (res%2==0)
    {
        printf("%d\n", res/2);
    }else
    {
        printf("IMPOSSIBLE\n");
    }
    
    return 0;
}
