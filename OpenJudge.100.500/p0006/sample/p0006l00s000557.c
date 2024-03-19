#include <stdio.h>

int main() 
{
    int debut = 100000;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        debut += debut / 20;
        if (0  < debut % 1000) {
            debut = debut / 1000 * 1000 + 1000;
        }
    }
    printf("%d\n", debut);
    return 0;
}

