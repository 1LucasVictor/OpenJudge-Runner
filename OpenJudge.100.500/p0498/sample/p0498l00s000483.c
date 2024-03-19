#include <stdio.h>

int main() {
    int n;

    do{
        scanf("%d", &n);
    }while(n<0 || n>100);


    int page;
    if (n%2 == 0) {
        page = n / 2;
    } else {
        page = n / 2 + 1;
    }

    printf("%d\n", page);

    return 0;
}
