#include <stdio.h>
int main(void){
    int n, i, j, b=0, m=0, x;
    
    scanf("%d\n", &n);
    
    for(i = 1; i <= n; i++) {
        x = 0;
        if (i % 3 == 0) 
            x = 1;
        j = i;
        while (j > 0) {
            if(j % 10 == 3) {
                x = 1;
                break;
            }
            j /= 10;
        }
        if (x == 1)
            printf(" %d", i);
    }
    printf("\n");
    return 0;
}
