#include <stdio.h>

int main(){
    int n, s;
    scanf("%d", &n);
        int a[n];
    for(int i = 1; i < n + 1; i++){
        scanf("%d", &s);
        a[n - i] = s;
    }
    for(int i = 0; i < n; i++){
        printf("%d", a[i]);
        if(i != n - 1){
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
