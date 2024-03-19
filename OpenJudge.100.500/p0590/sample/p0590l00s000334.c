#include <stdio.h>

int main() {
    int i;
    int A[5];
    int k;
    int count=0;
    for(i=0;i<5;++i){
        scanf("%d", &A[i]);
    }
    scanf("%d", &k);

    for(i=4;i>=0;--i){
        for(int j=0;j<5;++j){
            if(A[i]-A[j] <= k){continue;}else{printf(":(");return 0;}
        }

    }
    printf("Yay!");

    return 0;
}