#include<stdio.h>

int main(void){
    int k,a,b;
    int largest;
    scanf("%d", &k);
    scanf("%d%d", &a, &b);
    largest = (b/k) * k;
    if(largest>a){
        printf("OK");
    }else{
        printf("NG");
    }
    return 0;
}