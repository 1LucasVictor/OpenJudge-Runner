#include <stdio.h>
void rebirth(int a[], int b[], int n);
int main(void){
    int i, n, a[10000], b[10000];
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
        }
    rebirth(a, b, n);
    for(i = 1, printf("%d", b[0]); i < n; i++){
        printf(" %d", b[i]);
    }
    printf("\n");
    return 0;
}
void rebirth(int a[], int b[], int n){
    int i;
    for(i = 0; i < n; i++){
        b[i] = a[n -1 -i];
    }
    return;
}
