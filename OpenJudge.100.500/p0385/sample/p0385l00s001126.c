#include<stdio.h>
int main(){
    int i,j,n;
    for( i = 0 ; ; i += 1 ){
        int sum = 0,y[1000] = {};
        char x[1000] = {};
        for( j = 0 ; ; j += 1 ){
            scanf("%c",&x[j]);
            if( x[j] == '\n' ){
                n = j;
                break;
            }
            else{
                y[j] = x[j] - '0';
            }
        }
        if( x[0] == '0' ){
            break;
        }
        else{
            for( j = 0 ; j <= n ; j += 1){
                sum = sum + y[j];
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}