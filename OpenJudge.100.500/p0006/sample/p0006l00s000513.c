#include <stdio.h>

int main(){
    int n, i;
    long int a = 100000;
    
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        a = a + a / 20;
        if (a % 1000) a = a + 1000 - a % 1000;
    }
    printf("%d\n", a);
    
    return 0;
}