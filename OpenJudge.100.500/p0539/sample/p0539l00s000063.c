#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);

    int i,flg=0;
    for(i = 1 ; i <= 9 ; i++){
        if(N%i == 0 && N/i < 10){
            printf("Yes");
            flg++;
            break;
        }
    }
    if(flg == 0){
    printf("No");
    return 0;
    }
}