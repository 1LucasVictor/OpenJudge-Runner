#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
        long okane;
        long ureshisa = 0;
        scanf("%ld", &okane);
        while (okane / 500 > 0){
                ureshisa += 1000;
                okane -= 500;
        }
        while (okane / 5 > 0){
                ureshisa += 5;
                okane -= 5;
        }
        printf("%ld\n", ureshisa);
        return 0;
}