#include <stdio.h>

int main(void){
    int A[6];
    int k;
    for (int i=0; i<5; i++) {
        scanf("%d",&A[i]);
    }
    scanf("%d",&k);
    if(A[4]-A[0]>k){
        printf(":(\n");
    }
    else{
        printf("Yay!\n");
    }
    return 0;
}
