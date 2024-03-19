#include<stdio.h>
int main(void){
    int S;
    scanf("%d", &S);
    int h = S / 3600;
    int M = S % 3600;
    int m = M / 60;
    int s = M % 60;
    printf("%d:%d:%d\n", h, m, s);
    return 0;
}
