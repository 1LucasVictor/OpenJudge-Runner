#include <stdio.h>

int main() {
    int a,b,c;
    int tmp;
    int i;
    scanf("%d %d %d",&a,&b,&c);
    for( i = 1 ; i <= 2 ; i++ ){
        if( a > b ){
            tmp = a;
            a = b;
            b = tmp;
        }else if( b > c ){
            tmp = c;
            c = b;
            b = tmp;
        }
    }
    printf("%d %d %d\n",a,b,c);
    return 0;
}