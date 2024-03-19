// A - Transfer
#include <stdio.h>

int main(void){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if(c-(a-b) <= 0){
        printf("0\n");
    }else{
        printf("%d\n", c-(a-b));
    }
    return 0;
}