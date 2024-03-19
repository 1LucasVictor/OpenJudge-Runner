#include<stdio.h>
int main(){
    long max, data[200001] = {};
    long n, i, r;
    scanf("%ld", &n);
    for( i = 0; i < n; i++ ){
        scanf("%ld", &data[i]);
    }
    max = -200000;
    for( i = 0; i < n; i++ ){
        for( r = i + 1; r < n; r++ ){
            if( data[r] - data[i] > max ){
                max = data[r] - data[i];
            }
        }
    }
    printf("%ld\n", max);
    return 0;
}