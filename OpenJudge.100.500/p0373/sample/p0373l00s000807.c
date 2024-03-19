#include <stdio.h>

int main(void){
    int h[10000],w[10000],hh=-1,ww=-1,i=0,j,k,l;
    while (!(hh==0 && ww==0)){
        scanf("%d %d",&hh,&ww);
        h[i]=hh,w[i]=ww,i++;
    }
    for(j=0;j<i-1;j++){
        for(l=0;l<h[j];l++){
            for(k=0;k<w[j];k++){
                if (k==0 || k==w[j]-1 || l==0 || l==h[j]-1) printf("#");
                else printf(".");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

