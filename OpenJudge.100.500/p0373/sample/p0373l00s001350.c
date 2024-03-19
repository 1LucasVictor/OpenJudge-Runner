#include <stdio.h>
void Print_a_Rectangle(unsigned int H, unsigned int W)
{
    unsigned short i,j;
    for(i=1;i<=H;i++){
        for(j=1;j<=W;j++){
            if((i==1)||(i==H)||(j==1)||(j==W))
            {
                printf("#");
            }
            else
            {
                printf(".");
            }
        }
        printf("\n");
    }
}

int main()
{
    unsigned int H,W;
    while(1)
    {
        scanf("%d %d",&H,&W);
        if((H==0)&&(W==0))
        {
            break;
        }
        else
        {
            Print_a_Rectangle(H,W);
        }
        printf("\n");
    }
    return 0;
}
