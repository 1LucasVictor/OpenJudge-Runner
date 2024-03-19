#include <stdio.h>

int main() {
    int a, b, c, data;
    scanf("%d %d %d",&a, &b, &c);
    data = c-(a-b);
    if(data>=0) {
        printf("%d\n", data);
    }else{
        printf("0");
    }
    return 0;
}