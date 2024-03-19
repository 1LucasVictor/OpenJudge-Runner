#include<stdio.h>
int main() {
    int h, n, x = 0;
    scanf("%d%d", &h, &n);
    
    int A[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
        x = x+A[i];
}

    if(x >= h)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
