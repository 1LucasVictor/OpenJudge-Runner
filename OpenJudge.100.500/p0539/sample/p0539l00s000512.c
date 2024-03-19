#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    int i, j, k, l, a[9][9], N, judge=0;
    for(i=1;i<=9;i++){
        for(j=1;j<=9;j++){
            a[i][j]=i*j;
        }
    }
    scanf("%d", &N);
    for(k=1;k<=9;k++){
        for(l=1;l<=9;l++){
            if(N==a[k][l]){
                judge=1;
                break;
            }
        }
    }
    if(judge==1){
        printf("Yes");
    }else{
        printf("No");
    }
}