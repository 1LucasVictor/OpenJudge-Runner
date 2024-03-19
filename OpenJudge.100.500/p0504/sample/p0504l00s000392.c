#include<stdio.h>
     
int main() {
    int H, A, c;
     
    scanf("%d %d", &H, &A);
    c=((H-1) / A ) + 1;
    printf("%d\n", c);

    return 0;
}