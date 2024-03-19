#include <stdio.h>

int main(void){
    int i, n;
    char *ans = "No";
    scanf("%d", &n);
    for(i = 1; i < 10; ++i){
        if(n % i == 0 && n / i <= 9){
            ans = "Yes";
            break;
        }
    }
    printf("%s\n", ans);
    return 0;
}