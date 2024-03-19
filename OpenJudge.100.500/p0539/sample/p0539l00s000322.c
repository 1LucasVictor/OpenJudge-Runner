#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,m;
    scanf("%d",&m);
    for(i=1; i<=9; i++)
    {
        for(j=1; j<=9; j++)
        {
            if((i*j)==m)
            {
                printf("Yes\n");
                exit(0);
            }
        }
    }
    printf("No\n");
    return 0;


}
