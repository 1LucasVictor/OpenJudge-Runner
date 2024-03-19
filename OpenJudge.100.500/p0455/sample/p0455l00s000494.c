#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int a, n;
    char buf[30];

    fgets(buf, sizeof(buf), stdin);

    a = atol(buf);
    n = a+a*a+a*a*a;
    

    printf("%d\n", n);
}