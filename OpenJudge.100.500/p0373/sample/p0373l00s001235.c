#include <stdio.h>
 
int main(void) {
    int i,j;
    int H, W;
    
    while(1){
        scanf("%d %d",&H,&W);
        //???????????¶
        if(H==0&&W==0) break;
        for(i=0;i<W;i++) printf("#");
        printf("\n");
        for(i=0;i<H-2;i++){
            printf("#");
            for(j=0;j<W-2;j++){
                printf(".");
            }
            printf("#");
            printf("\n");
        }
        for(i=0;i<W;i++) printf("#");
        printf("\n");
        printf("\n");
    }
         
        return 0;
}