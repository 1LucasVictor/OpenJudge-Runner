#include <stdio.h>

int main (void){
    int h[10000],w[10000];
    int i,j,k,l;
    i = 0;
    while(1){
        scanf("%d %d",&h[i],&w[i]);
        if(h[i]==0 & w[i]==0){
            break;
        }
        i++;
    }

    for(j=0;j<i;j++){
//
        for(l=0;l<w[j];l++){
            printf("#");
        }
        printf("\n");
        for(k=0;k<h[j]-2;k++){
            printf("#");
            for(l=0;l<w[j]-2;l++){
                printf(".");
            }
            printf("#\n");
        }
        for(l=0;l<w[j];l++){
            printf("#");
        }        
        printf("\n");
//
        printf("\n");
    }
    
    return 0;
}
