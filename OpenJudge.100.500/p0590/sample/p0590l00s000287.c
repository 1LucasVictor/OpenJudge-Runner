#include<stdio.h>

int main(){

    int d[5],k;
    scanf("%d %d %d %d %d %d",&d[0],&d[1],&d[2],&d[3],&d[4],&k);

    if(d[4]-d[0]<=k){
        printf("Yay!\n");
    }else{
        printf(":(\n");
    }
    return 0;
}