#include <stdio.h>

#define abs(x)  ((x)<0?(x):(-(x)))

int main(){

    int ant[5], i, j, k, ans = 0;

    for (i=0; i<5; i++){
        scanf("%d", &ant[i]);
    }
    scanf("%d", &k);

    for (i=0; i<5; i++){
        for (j=0; j<5; j++){
            if ((abs(ant[i]-ant[j]) > k) && (i!=j)){
                ans = 1;
            }
        }
    }

    if (ans==1){
        printf(":(");
    }else{
        printf("Yay!");
    }

    return 0;
}