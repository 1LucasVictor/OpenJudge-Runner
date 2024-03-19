#include <stdio.h>

int main(void){
    int a, b, c, d, e, k;
    scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &k);
    printf("%s\n", (e-a <= k) ? "Yay!" : ":(");
    return 0; 
}