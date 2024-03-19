#include <stdio.h>

int main(void){
    int A, B;
    int n = 0, h = 1;

    scanf("%d %d",&A, &B);

    /*
    n = A;
    while(n < B){
        n += (A-1);
        h++;
    }*/
    n = A;
    for(h = 1; n < B;h++){
        n = n + (A-1);
    }
    printf("%d\n",h);

    return 0;
}

/*
    4 7 10
    8 9
*/
