#include <stdio.h>

int main(void) {
    int pages;
    scanf("%d", &pages);
    if (!(pages % 2)) 
        printf("%d\n", pages / 2);
    else
        printf("%d\n", pages / 2 + 1);
    
    return 0;
}