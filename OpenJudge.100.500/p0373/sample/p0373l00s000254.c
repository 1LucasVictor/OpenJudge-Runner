    #include <stdio.h>
int main(void){
    // Here your code !
    int H,W,i,k;
    while(1)
    {
        scanf("%d%d",&H,&W);
        if(H == 0 && W == 0)
        {
            return 0;
        }
        for(i = 0;i < H;i++)
        {
            for(k = 0;k < W;k++)
            {
                if(i == 0 || i == H-1)
                {
                    printf("#");
                }
                else
                if(k != 0 && k != W-1)
                {
                    printf(".");
                }
                else printf("#");
            }
            printf("\n");
        }
        printf("\n");
    }
}