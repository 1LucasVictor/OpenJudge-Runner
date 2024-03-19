#include<stdio.h>
int main(){
    int i, r, max, data[200001] = {};
    long long n;
    scanf("%lld", &n);
    for( i = 0; i < n; i++ ){
        scanf("%d", &data[i]);
    }
    for( i = 0; i < n; i++ ){
        for( r = i + 1; r < n; r++ ){
            if( r == i + 1 && i == 0 ){
                max = data[r] - data[i];
            }
            else if( data[r] - data[i] > max ){
                max = data[r] - data[i];
            }
        }
    }
    printf("%d\n", max);
    return 0;
}