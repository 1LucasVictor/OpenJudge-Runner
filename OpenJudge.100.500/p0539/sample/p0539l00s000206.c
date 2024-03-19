#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    int i,q;
    for(i=1;i<10;i++){
        if(n%i==0){
            if(n/i<10){
                printf("Yes\n" );
                return 0;
            }
        }
    }printf("No\n" );
    return 0;
}
