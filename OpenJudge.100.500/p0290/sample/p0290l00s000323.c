#include <stdio.h>
#include <math.h>

int main()
{
    int n, x, count = 0;
    int i, j;
    
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d", &x);
        if (x % 2 == 0 && x != 2) continue;
        else if (x == 2) {count++; continue;}
        else {
             for (j = 3; j < sqrt(x); j += 2){
                if (x % j == 0) break;
             }
             if (j >= sqrt(x)) count++;
        }
    }
    printf("%d\n", count);
    
    return 0;
}