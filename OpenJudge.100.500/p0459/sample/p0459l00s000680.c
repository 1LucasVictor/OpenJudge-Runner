#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d %d",&X,&Y);
    if(Y%2)
    {printf("No\n");
        return 0;
    }

    if(Y>=2*X&&Y<=4*X)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
