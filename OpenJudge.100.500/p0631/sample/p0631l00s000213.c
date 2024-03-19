#include <stdio.h>

int main(void){
    int a, b, x ;
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &x);
    
    if (a <= x){
        
        if(x-a <= b){
            printf("YES");
        }else{
            printf("NO");
        }
    }else{
        printf("NO");
    }
    
    return 0 ;
}