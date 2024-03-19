#include <stdio.h>

int main(void){
    int k[5];
    int n;

    for(int i = 0; i < 5; i++){
        scanf("%d", &k[i]);
    }
    scanf("%d", &n);

    if(k[4] - k[0] > n){
        printf(":(");
    }
    else{
        printf("Yay!");
    }

    return 0;
}