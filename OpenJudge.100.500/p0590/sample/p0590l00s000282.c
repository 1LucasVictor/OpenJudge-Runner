#include<stdio.h>

int main(){

    int d[5],k;
    scanf("%d %d %d %d %d %d",&d[0],&d[1],&d[2],&d[3],&d[4],&k);

    int flag=1;
    for(int i=0;i<4;i++){
        if(d[i+1]-d[i]>k){
            flag=0;
            break;
        }
    }
    if(flag){
        printf("Yay!\n");
    }else{
        printf(":(\n");
    }
    return 0;
}