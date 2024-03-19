#include <stdio.h>

int main()
{
    int i, j, r,c;
    while(scanf("%d%d",&r,&c)){
            if(r==0 && c==0)
            break;


    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            if(i==1 || j==1 || i==r || j==c)
            printf("#");
            else
                printf(".");
        }

        printf("\n\n");
    }
    }

    return 0;
}


