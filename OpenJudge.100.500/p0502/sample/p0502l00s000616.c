#include <stdio.h>

int main()
{
    int a, b, aceitos = 0, pares = 0, cont = 0;
    scanf("%d%d", &a, &b);
    while(a>cont){
        if (b%2==0){
            ++pares;
            if(b%3==0 || b%5==0){
                ++aceitos;
            }
        }
        ++cont;
    }

    if (pares==aceitos){
        printf("APPROVED\n");
    } else {
        printf("DENIED\n");
    }
    return 0;
}
