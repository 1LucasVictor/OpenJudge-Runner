#include <stdio.h>
int main(void){
    int a, b, c, d;
    
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    if(b <= c || a >= b || a >= d){
        printf("0\n");
    }else if(b >= c && b <= d && a <= c){
        printf("%d\n", b - c);
    }else if(b >= d && a <= c){
        printf("%d\n", d - c);
    }else if(a >= c && b >= c && b <= d){
        printf("%d\n", b - a);
    }else if(b >= d && a >= c){
        printf("%d\n", d - a);
    }
}
