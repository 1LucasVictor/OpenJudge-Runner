#include <stdio.h>

int abs(int x) {
    if(x < 0) {
        return -x;
    }

    return x;
}

void mostrar_resultado(int A, int B) {
    int dif = abs(A - B);

    if(dif <= 1) {
        printf("Yay!");
    }

    else {
        printf(":(");
    }

    printf("\n");
}

int main() {
    int A, B;

    scanf("%d %d", &A, &B);

    mostrar_resultado(A, B);

    return 0;
}