#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    if (c > a){
        if (b > c){
            if (b > d){
                printf("%d\n", d - c);
            }else{
                printf("%d\n", b - c);
            }
        }else{
            printf("0\n");
        }
    }else if(a > c){
        if (d > a){
            if (d > b){
                printf("%d", b - a);
            }else{
                printf("%d", d - a);
            }
        }else{
            printf("0\n");
        }
    }

    return 0;
}