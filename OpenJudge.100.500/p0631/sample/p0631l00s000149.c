#include <stdio.h>
int main(void){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if(a + b >= c && a <= c){
        printf("YES");
    }else{
        printf("NO");
    }
    
}
