#include <stdio.h>
int main(void){

    int n, a, b, sum;
    
    scanf("%d %d %d", &n, &a, &b);
    
    if(n*a > b){sum = b;}
    else{sum = n*a;}
    
    printf("%d", sum);
}