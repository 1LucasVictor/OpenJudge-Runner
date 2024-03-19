#include <stdio.h>
int main(){
    int H, W;
    while(1){
        scanf("%d%d", &H, &W);
        if ( H == 0 && W == 0 ){
            break;
        }
        for (int i = 1; i <= H; i++)
        {
            for (int j = 1; j <= W; j++)
            {
                if (i == 1 || i == H || j == 1 || j == W){
                    printf("#");
                }
                 else {
                    printf(".");
                }
            }        
        printf("\n");
        }
    printf("\n");
    }
    return 0;
}
