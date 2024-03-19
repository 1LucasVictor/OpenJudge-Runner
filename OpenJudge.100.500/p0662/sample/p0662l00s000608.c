#include <stdio.h>
int main(void){
    int a, b, c, d;
    
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    if(b < c || a > d){
        printf("0\n");
    } else if(b >= d && a <= c){
        printf("%d\n", d - c);
    } else if(b <= d && b > c && a < c){
        printf("%d\n", b - c);
    } else if(a >= c && d <= b){
        printf("%d\n", d - a);
    } else if(a >= c && d >= b){
        printf("%d\n", b - a);
    }
}
