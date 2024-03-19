#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int n,k,c;
    scanf("%*d %d %d %*d", &n,&k);
    c = n-k;

    
    if (c >=0) {
        printf("%d\n",c);
    }else{
        printf("0\n");

    }

    return 0;
}
