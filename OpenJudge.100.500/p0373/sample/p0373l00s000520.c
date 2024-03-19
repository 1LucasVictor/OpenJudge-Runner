#include <stdio.h>

int main()
{
    int H, W, x, y;
    
    while(1){
        
        scanf("%d %d", &H, &W);
        
        if(H==0 && W==0){
            break;
        }
        
        for(y=1; y<=H; y++){
            for(x=1; x<=W; x++){
                if((x==1) || (x==W) || (y==1) || (y==H)){
                    printf("#");
                }else{
                    printf(".");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    
    return 0;
}