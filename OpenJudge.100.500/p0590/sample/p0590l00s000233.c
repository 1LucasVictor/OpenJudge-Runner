#include<stdio.h>

int main(void){


    int i, j, k, array[5];
    for(i = 0; i < 5; i++){
        scanf("%d", &array[i]);
    }
    scanf("%d", &k);

    for(i = 4; i > 0; i--){
        for(j = i - 1; j >= 0; j--){
            if(array[i] - array[j] > k){
                printf(":(");
                return 0;
            }
        }

    }

    printf("Yay!");
    return 0;



}