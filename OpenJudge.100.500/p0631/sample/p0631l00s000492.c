#include <stdio.h>
#include <string.h>

int main(void){
    int a;
    int b;
    int x;
    scanf("%d %d %d", &a, &b, &x);

        if(x > (a+b)){
            printf("NO\n");
        }else if( x<a){
            printf("NO\n");
        }else{
            printf("YES\n");
        }
    return 0;
}    
