#include<stdio.h>
int main(void){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int i, count = 0;
    for (i = a; i <= b;i++){
        if (c % i == 0){
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
