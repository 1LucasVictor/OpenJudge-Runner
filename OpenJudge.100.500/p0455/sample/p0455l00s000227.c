#include <stdio.h>
#include <math.h>

int main(){
    int n, soma;
    scanf("%d", &n);
    soma = n + pow(n,2) + pow(n,3);
    printf("%d", soma);
    

    return 0;
}