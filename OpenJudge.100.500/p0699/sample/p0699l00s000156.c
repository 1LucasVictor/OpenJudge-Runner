#include <stdio.h>
int main(void){
    int a, b, c, f=2, s=1;
    scanf("%d%d%d", &a, &b, &c);
    
    a == 5 ? f-- : a == 7 ? s--:0;
    b == 5 ? f-- : b == 7 ? s--:0;
    c == 5 ? f-- : c == 7 ? s--:0;
    
    printf(f == 0 && s == 0 ? "YES\n": "NO\n");
    
    return 0;
}