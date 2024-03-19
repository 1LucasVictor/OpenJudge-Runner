#include <stdio.h>

int main(void){
    int i, n;
    scanf("%d", &n);
    
    for(i = 1; i <=n ;i++){
        
        if(i % 3 == 0){
            printf(" %d", i);
        }else if(i % 10 == 3){
            printf(" %d", i);
        }else if(i / 10 > 0 && (i/10) % 10 == 3){
            printf(" %d", i);
        }else if(i / 100 > 0 && (i/100) % 10 == 3){
            printf(" %d", i);
        }else if(i / 1000 > 0 && (i/1000) % 10 == 3){
            printf(" %d", i);
        }else if(i / 10000 > 0 && (i/10000) % 10 == 3){
            printf(" %d", i);
        }
    }
    printf("\n");
    return 0;
}