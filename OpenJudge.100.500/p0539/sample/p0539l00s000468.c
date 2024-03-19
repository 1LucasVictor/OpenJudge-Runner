#include<stdio.h>
int main()
{
    int N,a,b;
    scanf("%d",&N);
    for(a=1;a<=9;a++)
    {
        if(N%a==0)
        {
            b=N/a;
        }
    }
    if(1<=b<=9)
    {
        printf("Yes");
    }
    else
    printf("No");
    return 0;
}