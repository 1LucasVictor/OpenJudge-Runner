#include <stdio.h>

int main(){
    int a, b, x=0;
    scanf("%d%d", &a, &b);
    x=(a+b)/2;
    if((a+b)%2==0){
         printf("%d", x);
    }else{
        printf("IMPOSSIBLE");
    }
    
    return 0;
}