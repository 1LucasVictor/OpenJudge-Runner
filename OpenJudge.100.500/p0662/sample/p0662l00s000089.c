#include <stdio.h>
int main(void){
    int a, b, c, d;
    
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    if(a + b < c){
        printf("0\n");
    } else if(b > d){
        printf("%d\n", d - c);
    } else if(a + b > c){
        printf("%d\n", b - c);
    }
    
}
