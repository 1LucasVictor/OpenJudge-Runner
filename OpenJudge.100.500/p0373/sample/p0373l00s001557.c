#include<stdio.h>
int main(){
    while(1){
    int H,W,i,j;
    scanf("%d%d",&H,&W);
        if(H==0&&W==0)
        break;
        for(i=0;i<H;i++)
        {
            for(j=0;j<W;j++)
            {
				if(i == 0||i == H - 1||j == 0||j == W - 1)
                printf("#");
				else
				printf(".");
             }
            printf("\n");
        }
        printf("\n");
         
         
    }
return 0;
}
