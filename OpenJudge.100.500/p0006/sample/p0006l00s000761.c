#include <stdio.h>

int main() {
    int debt = 100000;
    int rate;
    unsigned short int n;
    scanf("%hd", &n);

    for (int i=0; i<n; i++) {
        rate = debt * 0.05;
        if ( rate%1000 != 0 ) rate = rate - (rate%1000) + 1000;
        debt += rate;
    }
    
    printf("%d\n", debt);

    return 0;
}
