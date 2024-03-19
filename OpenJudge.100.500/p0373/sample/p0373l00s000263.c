#include<stdio.h>

int main(void){

    int H,W,a[1000][2],i=0,j=0,x=0,k;

    while(1){
        scanf("%d %d", &a[x][0], &a[x][1]);
        if(a[x][0]==0&&a[x][1]==0)break;
        x++;
    }

    for(i=0;i<x;i++){
        for(j=0;j<a[i][0];j++){
            if(j==0||j==a[i][0]-1){
                for(k=0;k<a[i][1];k++){
                printf("#");
                }
            }else{
                for(k=0;k<a[i][1];k++){
                    if(k==0||k==a[i][1]-1){
                        printf("#");
                    }else{
                        printf(".");
                    }
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
