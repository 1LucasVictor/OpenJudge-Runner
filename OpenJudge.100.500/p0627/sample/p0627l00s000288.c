#include <stdio.h>

int main(){

    int a, b;
    int soma, diferenca, produto;

    scanf("%d %d", &a, &b);

    soma = a + b;
    diferenca = a - b;
    produto = a * b;

    if(soma >= diferenca && soma >= produto) {
        printf("%d\n", soma);
    } else if(diferenca > soma && diferenca > produto) {
        printf("%d\n", diferenca);
    } else {
        printf("%d\n", produto);
    }

    return 0;
}