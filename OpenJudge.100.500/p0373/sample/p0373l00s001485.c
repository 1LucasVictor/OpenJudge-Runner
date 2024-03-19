#include<stdio.h>
int main(void)
{
    int W,H,i,j,k,l;
    
    for(;;)
    {
        scanf("%d%d",&H,&W);

        for(i=0;i<W;i++)
        {
            printf("#");
        }

        printf("\n");

        for(l=0;l<(H-2);l++)
        {
            printf("#");

            for(j=0;j<(W-2);j++)
            {
                printf(".");
            }

            printf("#");

            printf("\n");
        }

        for(k=0;k<W;k++)
        {
            printf("#");
        }
        
        printf("\n");
        printf("\n");
        
        if((H==0)&&(W==0))break;
    }
    return 0;
}
