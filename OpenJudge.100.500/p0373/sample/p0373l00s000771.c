#include <stdio.h>

void printHashLine(int n) {
    for (int j=0; j<n; ++j) {
        printf("#");
    }
    printf("\n");
}

void printDotLine(int n) {
    printf("#");
    for (int j=1; j<n-1; ++j) {
        printf(".");
    }
    printf("#\n");
}

int main() {
    int h, w;
    while (1) {
        scanf("%d %d", &h, &w);
        if (h == 0 && w == 0) { break; }

        printHashLine(w);
        for (int i=1; i<h-1; ++i) {
            printDotLine(w);
        }
        printHashLine(w);
        printf("\n");
    }
    return 0;
}

