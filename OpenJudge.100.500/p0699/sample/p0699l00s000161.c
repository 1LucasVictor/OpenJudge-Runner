#include <stdio.h>
 
int main(void){
    int a, b, c;
 
    scanf("%d%d%d", &a, &b, &c);
 
    if(a*b*c == 5*5*7 && a+b+c == 17 && a*b+b*c+c*a == 95){
        printf("YES");
        return 0;
    }
    printf("NO");
 
    return 0;
}