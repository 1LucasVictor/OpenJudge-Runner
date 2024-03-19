#include <stdio.h>

int main(){
    int n, idx, debt = 100000;
    scanf("%d", &n);
    for(idx = 0; idx < n; ++idx){
        debt *= 1.05;
        if(debt - debt / 1000 * 1000){
            debt = debt / 1000 * 1000 + 1000;
        }
    }
    printf("%d\n", debt);
    return 0;
}