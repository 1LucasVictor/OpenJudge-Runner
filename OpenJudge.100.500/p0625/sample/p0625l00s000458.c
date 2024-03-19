#include<stdio.h>

int main(){
    int A, B, ans;
    scanf("%d %d", &A, &B);
    if(A <= 8 && B <= 8){
        printf("Yay!");
    }
    else{
        printf(":(");
    }
    return 0;
}

