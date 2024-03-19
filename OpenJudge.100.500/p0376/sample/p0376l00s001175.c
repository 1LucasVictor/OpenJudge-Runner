#include <stdio.h>

int main(void) {

    int n, i, j;
    int a[100];


    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    i = i - 1;

    while(i != 0){
        printf("%d ", a[i]);
        i--;
    }

    printf("%d", a[0]);
    printf("\n");

    return 0;
}


