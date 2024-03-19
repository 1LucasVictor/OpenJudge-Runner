#include <stdio.h>

int main(void){

    int a,b,c;
    int i,n_yakusu=0;

    //input
    scanf("%d %d %d",&a, &b, &c);


    for(i=a; i<=b; i++){
        if(c%i==0){
            n_yakusu++;
        }
    }

    //output
    printf("%d\n", n_yakusu);

}