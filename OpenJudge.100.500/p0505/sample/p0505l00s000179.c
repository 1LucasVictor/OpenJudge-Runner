#include <stdio.h>
int main()
{
    int vida, atqs, dano = 0, soma = 0;
    scanf("%d%d",&vida, &atqs);

    for(int i = 0; i < atqs; ++i) {
        scanf("%d",&dano);
        soma = soma + dano;
        vida = vida - dano;

    }

    if (vida > 0)
        printf("No\n");
    else
        printf("Yes\n");

    //printf("DANO NO JOGO: %d", soma);
    return 0;
}
