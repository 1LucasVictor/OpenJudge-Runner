#include<stdio.h>
#include<stdlib.h>
int main(){
    int A,B;
    scanf("%d",&A);
    scanf("%d",&B);
    
    int K = abs(A+B) / 2;
    if((A + B) % 2 == 0){
        printf("%d",K);
    }else{
        printf("IMPOSSIBLE");
    }
    return 0;
}
