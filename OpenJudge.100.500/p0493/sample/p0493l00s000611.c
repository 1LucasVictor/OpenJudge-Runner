#include <stdio.h>

int main() {
    int money;
    scanf("%d", &money);
    
    int mil = (money/500)*1000;
    int fiv = ((money%500)/5)*5;
    
    printf("%d\n", mil+fiv);
    
    return 0;
}
