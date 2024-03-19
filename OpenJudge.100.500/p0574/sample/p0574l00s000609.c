#include <stdio.h>

int main(void){
    int S,n1,n10,n100,n1000;
    int flag=0;

    scanf("%d", &S);

    n1 = S %10;
    n10 = (S / 10) % 10;
    n100  = (S / 100) % 10;
    n1000  = (S / 1000);

    if(n1 == n10 || n10 == n100 || n100 == n1000) flag =1;

    if(flag == 1) printf("Bad\n");
    else printf("Good\n");
}
