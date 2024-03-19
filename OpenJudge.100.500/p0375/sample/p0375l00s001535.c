#include<stdio.h>
int main(void){
    int n, x;
    scanf("%d", &n);
    for(x = 1; x <= n; x++){
        if(x % 3 == 0){
            printf(" %d", x);
        } else if(judge(x) == 1){
            printf(" %d", x);
        }
    }
    printf("\n");
    return 0;
}

int judge(x){
    while(x != 0){
        if(x % 10 == 3){
            return 1;
        }
        x /= 10;
    }
    return 0;
}