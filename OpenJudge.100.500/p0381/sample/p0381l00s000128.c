#include<stdio.h>
int main(){
    int n, x, i, r, z, num, tmp = 0;
    for(;;){
        scanf("%d%d", &n, &x);
        tmp = 0;
        if( n == 0 && x == 0 ){
            break;
        }
        for( i = 1; i <= n; i++ ){
            for( r = i+1 ; r <= n; r++ ){
                for( z = r+1; z <= n; z++ ){
                    num = i + r + z;
                    if( num == x ){
                        tmp += 1;
                    }
                }
            }
        }
        printf("%d\n",tmp);
    }
    return 0;
}