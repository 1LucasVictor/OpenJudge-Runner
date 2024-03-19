#include <stdio.h>

int n_buka[200001];

int main()
{
    int n;
    scanf("%d", &n);
    
    
    for (int i = 1; i < n; i++) {
        int a;
        scanf ("%d", &a);
        
        n_buka[a]++;
    }
    
    for (int i = 1; i <= n; i++) {
        printf("%d\n", n_buka[i]);
    }
}
