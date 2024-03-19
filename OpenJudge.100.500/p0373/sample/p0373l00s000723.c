#include <stdio.h>
int main(void){
    int w,h,i,j;
    while(1){
        scanf("%d %d\n",&h, &w);
        if(w==0 && h==0)break;
        for(j=1;j<=h;j++){
            if(j == 1 || j == h) {
                for(i=1;i<=w;i++){
                    printf("#");
                }
                printf("\n");
            }else {
                for(i=1;i<=w;i++){
                    if(i==1 || i==w) printf("#");
                    else printf(".");
                }
                printf("\n");
            }
        }
        printf("\n");
    }
    return 0;
}
