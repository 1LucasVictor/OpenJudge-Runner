#include <stdio.h>

int main(int argc, char **argv) {
    int k, a, b ;
    scanf("%d %d %d", &k, &a, &b) ;

    int tmp = k ;
    while((k+tmp)<a) k += tmp ;
    if(k+tmp<b) printf("OK\n") ;
    else printf("NG\n") ;
    
    return 0 ;
}
