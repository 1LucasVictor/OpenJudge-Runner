#include <stdio.h>

int main() {
    int a, b, errados = 0, cont = 0;
    scanf("%d", &a);
    while(a>cont){
        scanf("%d", &b);
        if (b%2==0){
            if(b%3!=0 && b%5!=0){
                ++errados;
            }
        }
        ++cont;
    }

    if (errados != 0){
        printf("DENIED\n");
    } else {
        printf("APPROVED\n");
    }
    return 0;
}