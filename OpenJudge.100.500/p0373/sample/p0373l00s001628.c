#include <stdio.h>
#define MAX 300

int main(void){
    int H[MAX],W[MAX];
    int i=0,j,w,h;
    for (i=0; i<MAX; i++) {
        scanf("%d %d",&H[i],&W[i]);
        if(H[i]==0&&W[i]==0){
            break;
        }
        else{
            if(H[i]<3||W[i]<3||300<H[i]||300<W[i]){
                return 0;
            }
        }
    }
    
    for(j=0;j<i;j++){
        for(h=0;h<H[j];h++){
            for(w=0;w<W[j];w++){
                if(w==0||w==W[j]-1||h==0||h==H[j]-1){
                    printf("#");
                }
                else{
                    printf(".");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
}
