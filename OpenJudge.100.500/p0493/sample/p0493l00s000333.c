#include <stdio.h>

int main() {
    int yen;
    int gold = 0;
    scanf("%d", &yen);
    int resto = yen % 500;
    
    if (yen == 500)
        gold = 1000;
    else if (yen > 500) {
        gold = ((yen / 500)*1000) + ((resto / 5)*5);
    } else 
        gold = (resto / 5)*5;
    
    printf("%d\n", gold);
    
    return 0;
}
