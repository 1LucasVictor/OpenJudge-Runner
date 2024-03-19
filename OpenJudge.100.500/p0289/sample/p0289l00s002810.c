#include<stdio.h>

int main() {
    int inp_1 = 0, 
        inp_2 = 0,
        mod = 0,
        store = 0;

    scanf("%d %d", &inp_1, &inp_2);
    if ( inp_1 < inp_2 ) {
        store = inp_1;
        inp_1 = inp_2;
        inp_2 = store;
    }

    else if ( inp_1 == inp_2 ) {
        printf("%d\n", inp_1);
        return 0;
    }

    mod = inp_1 % inp_2;
    while(mod != 0){
        inp_1 = inp_2;
        inp_2 = mod;
        mod = inp_1 % inp_2;
    }

    printf("%d\n", inp_2);
    return 0;
}

