#include <stdio.h>

int main(){
    int n, a, b;

    char buf[256];
    fgets(buf, 256, stdin);

    sscanf(buf, "%d %d %d", &n, &a, &b);

    if(n*a > b){
        printf("%d", b);
    }else{
        printf("%d", n * a);
    }
}
