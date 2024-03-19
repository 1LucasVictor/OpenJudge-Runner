#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    int sum = a+b;
    if(sum%2==0)
        printf("%d\n",sum/2);
    else
        printf("IMPOSSIBLE\n");

    return 0;
}
