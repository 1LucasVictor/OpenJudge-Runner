#include <stdio.h>
int main()
{
    int x,n;
    scanf("%d %d",&x,&n);
    if(n%2==0)
    {
        if(n>=(x*2) && n<=(x*4))
            printf("Yes");
        else printf("No");
    }
    else
    {
        printf("No");
    }
    return 0;
}
