#include <stdio.h>
int main(void){
    int a[256];
    scanf("%d %d %d %d %d %d",&a[1],&a[2],&a[3],&a[4],&a[5],&a[0]);
    if (a[0] >= a[5] - a[1]){
        printf("Yay!");
    }else {
        printf(":(");
    }
}