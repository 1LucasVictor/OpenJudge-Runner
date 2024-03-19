#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c,i,j,flag;

    flag = 0;

    scanf("%d",&c);

    for(i = 1;i < 10;i++)
        for(j = 1;j < 10;j++)
            if(i * j == c)
            {
                flag = 1;
                break;
            }

    printf("%s",flag == 1?"Yes":"No");

    return 0;
}
