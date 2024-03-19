#include <stdio.h>

int main(){

    int n, digitos[3], qtd = 0;
    scanf("%d", &n);

    for(int i = 0; i < 3; ++i){
        digitos[i] = n%10;
        n = n/10;
    }

    for(int i = 0; i < 3; ++i){
        if(digitos[i] == 7){
            qtd++;
        }
    }

    if(qtd > 0){
        printf("Yes\n");
    } else{
        printf("No\n");
    }

    return 0;
}
