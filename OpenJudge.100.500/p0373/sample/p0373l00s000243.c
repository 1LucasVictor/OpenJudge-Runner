#include <stdio.h>
int main(void){
    // Your code here!
    int h,w,i,j;
    while(scanf("%d %d\n", &h, &w)!= EOF){
        if(h == 0 && w == 0){
            break;
        }
        for(i=0;i<h;i++){
            for(j=0; j<w;j++){
                if(i >= 1 && j>= 1 && i < h-1 && j <w-1){
                    printf(".");
                }else{
                        printf("#");
                }
            }
            printf("\n");
        }
        printf("\n");
        }
    return 0;
}

