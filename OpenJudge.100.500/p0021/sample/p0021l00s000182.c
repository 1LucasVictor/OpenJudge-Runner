#include <stdio.h>

int main()
{
    int n, i, j, k, max, temp, buff[5001] = {0, };
    
    scanf("%d", &n);
    
    while (n != 0) {
        max = 0;
        
        for (i = 1; i <= n; i++) {
            scanf("%d", &buff[i]);
        }
        
        for (i = 2; i <= n; i++) {
            for (j = 1; j <= n + 1 - i; j++) {
                temp = 0;
                
                for (k = 0; k <= i - 1; k++) {
                    temp += buff[j + k];
                }
                
                if (temp > max) {
                    max = temp;
                }
            }
        }
        
        printf("%d\n", max);
        scanf("%d", &n);
    }
    
    return 0;
}