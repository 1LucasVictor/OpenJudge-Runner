#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if((x>=-40)&&(x<=40))
    {
    if(x>=30)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    }
    return 0;
}