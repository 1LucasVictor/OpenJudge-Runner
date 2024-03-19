#include <stdio.h>

int main(){
    int x, div, resto, hap = 0, mil, restod, dezena;
    scanf("%d", &x);

    if(x < 500){
        div = x / 5;
        hap = div * 5;
        printf("%d", hap);
    }else{
        resto = x % 500;
        div = x / 500;
        mil = div * 1000;

        if(resto < 500){
        restod = resto / 5;
        dezena = restod * 5;
        hap = mil + dezena;
        printf("%d", hap);
            }
        }
        return 0;
    }


