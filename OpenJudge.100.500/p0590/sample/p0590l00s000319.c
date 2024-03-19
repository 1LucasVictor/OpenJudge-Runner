#include <stdio.h>

int main(void){
    int k[5];
    int n, flg;

    for(int i = 0; i < 5; i++){
        scanf("%d", &k[i]);
    }
    scanf("%d", &n);

    flg = 0;
    for(int i = 1; i < 5; i++){
        if(k[i] - k[i - 1] > n){
            flg = 1;
        }
    }

    if(flg == 0){
        printf("Yay!");
    }
    else{
        printf(":(");
    }

    return 0;
}