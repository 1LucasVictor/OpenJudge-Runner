#include <stdio.h>
int main(void){
    int H,W,n,m;
    for(;;){
        scanf("%d %d",&H,&W);
        if(H==0 && W==0){
            break;
        }
        for(m=1;m<=W;m++){
            printf("#");
        }
        printf("\n");
        for(n=1;n<=H-2;n++){
            printf("#");
            for(m=1;m<=W-2;m++){
                printf(".");
            }
            printf("#\n");
        }
        for(m=1;m<=W;m++){
            printf("#");
        }
        printf("\n");
        printf("\n");
  }
  return 0;
}