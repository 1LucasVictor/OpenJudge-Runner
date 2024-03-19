#include <stdio.h>

int main(void){
    int a[3];
    scanf("%d%d%d", &a[0], &a[1], &a[2]);
    if (a[0]==7){
        if (a[1]==5&&a[2]==5) {
            printf("YES");
            return 0;
        }
    }
    if (a[1]==7){
        if (a[0]==5&&a[2]==5) {
            printf("YES");
            return 0;
        }
    }
    if (a[2]==7){
        if (a[0]==5&&a[1]==5) {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}