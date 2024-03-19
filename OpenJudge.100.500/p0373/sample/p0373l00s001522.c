#include <stdio.h>
int main(void){
    int i,j,k,H,W;
    for ( k = 0; k < 300; k++ ){

    scanf("%d",&H);
    scanf("%d",&W);
    if(H == 0&&W == 0)break;
    for ( i = 0; i < H; i++ ){
        for ( j = 0; j < W; j++ ){
            if(i==0)
            printf("#");
            else if(j==0)
            printf("#");
            else if(i==(H-1))
            printf("#");
            else if(j==(W-1))
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
