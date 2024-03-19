#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int data[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &data[i]);
    }
    for (int j = n-1; j >= 0; j--){
        printf("%d", data[j]);
        if (j > 0){
            printf(" ");
        }
    } printf("\n");
}
