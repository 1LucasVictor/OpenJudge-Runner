#include <stdio.h>

int main() {
    int bi, prn, a = 0;
    scanf("%d %d", &bi, &prn);
    
    for (int i = 0; i < bi+1; ++i){
        int x = bi - i;
        
        if (i*2 + x*4 == prn){
            a = 1;
            break;
        }
    }
        if (a == 1)
            printf("Yes\n");
        else
            printf("No\n");
    
    return 0;
}
