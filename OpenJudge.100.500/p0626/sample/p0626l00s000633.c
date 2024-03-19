#include <stdio.h>

int main(){
    int D, N;

    do{
        scanf("%d%d", &D, &N);

    }while(D<0 || D>2 || N<1 || N>99);

    if(D == 0){
        printf("%d\n", N);
    } else if(D == 1){
        printf("%d\n",100*N);
    } else if(D == 2){
        printf("%d\n",10000*N);
    }
    return 0;
}
