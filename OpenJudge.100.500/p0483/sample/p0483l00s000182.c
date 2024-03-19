#include<stdio.h>
int main(void){
    int n, tmp;
    scanf("%d", &n);
    while(n > 0){
        tmp = n / 10;
        if(n % 10 ==  7){
            printf("Yes\n");
            break;
        }
        n = tmp;
        if(tmp == 0){
            printf("No\n");
            break;
        }
    }
}