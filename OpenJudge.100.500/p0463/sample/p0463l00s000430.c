#include <stdio.h>

int main(){
    int i;
    scanf("%d", &i);

    int amari = 0;
    amari = i % 10;

    if(amari == 2 || amari == 4 || amari == 5 || amari == 7 || amari == 9)
    {
        printf("hon");
    }

    if(amari == 0 || amari == 1 || amari == 6 || amari == 8)
    {
        printf("pon");
    }

    if(amari == 3)
    {
        printf("bon");
    }

    return 0;

}
