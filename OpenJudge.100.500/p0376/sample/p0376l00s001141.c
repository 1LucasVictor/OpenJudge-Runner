#include<stdio.h>

int main(void){
    int n, array[100], count;
    scanf("%d", &n);
    for(count = 0; count < n ; count++){
        scanf("%d", &array[count]);
    }
    printf("%d", array[n - 1]);
    for(count = n - 2; count >= 0; count--){
        printf(" %d", array[count]);
    }
    printf("\n");
    return 0;
}