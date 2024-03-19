#include<stdio.h>
int main(){
    int H[300],W[300],i=0,j,k;

        while(1){
        scanf("%d%d",&H[i],&W[i]);
        if(H[i]==0&&W[i]==0){
            break;
        }
        i++;
    }

    i=0;
    while(H[i]!=0&&W[i]!=0||H[i]!=0&&W[i]==0||H[i]==0&&W[i]!=0){
        for(j=0;j<H[i];j++){
            for(k=0;k<W[i];k++){
                if(0<j&&0<k&&j!=H[i]-1&&k!=W[i]-1){
                    printf(".");
                }else{
                    printf("#");
                }
            }
            printf("\n");
        }
        printf("\n");
        i++;
    }

    return 0;
}