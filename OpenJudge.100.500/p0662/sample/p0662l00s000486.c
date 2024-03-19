#include <stdio.h>
int main(void){
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if(a < c){
        if(b < d){
            if(b > c){
                printf("%d", b - c);
            }else{
                printf("0");
            }
        }else{
            printf("%d", d - c);
        }
    }else if(b < d){
        printf("%d", b - a);
    }else if(a >= d){
        printf("0");
    }else{
        printf("%d", d - a);
    }
}
