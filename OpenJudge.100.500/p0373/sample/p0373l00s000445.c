#include <stdio.h>

int main(void) {
    int H;
    int W;
    int i;
    int n;
    while(1){
        scanf("%d%d",&H,&W);
        if(H==0 || W==0) break;
        for(i=1;i<=H;i++){
            for(n=1;n<=W;n++){
                if((i==1 || i ==H) || (n==1 || n==W)){
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


