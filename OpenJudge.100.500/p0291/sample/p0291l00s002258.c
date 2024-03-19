#include<stdio.h>
int main(){
    long max = -200000000000, data[200000] = {};
    long n, i, r;
    scanf("%ld", &n);
    for( i = 0; i < n; i++ ){
        scanf("%ld", &data[i]);
    }
    for( i = 1; i < n; i++ ){
        for( r = 0; r < i; r++ ){
            if( data[i] - data[r] > max ){
                max = data[i] - data[r];
            }
        }
    }
    printf("%ld\n", max);
    return 0;
}