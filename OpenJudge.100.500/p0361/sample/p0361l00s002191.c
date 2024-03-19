#include<stdio.h>
int main()
{
    int S;
    scanf("%d",&S);
    if(S>=0&&S<=86400)
    {
        printf("%d:%d:%d\n",S/3600,((S%3600)/60),((S%3600)%60));
    }
    return 0;
}

