#include <stdio.h>
int main(void){
    int i;
    int a,b,c,cnt;
    scanf("%d" , &cnt );
    for( i = 0 ; i < cnt ; i++ ){
        scanf( "%d %d %d " , &a , &b , &c );
        if( a * a + b * b == c * c || c * c + b * b == a * a || a * a + c * c == b * b ){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
}
