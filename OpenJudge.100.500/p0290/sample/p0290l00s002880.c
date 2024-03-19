#include <stdio.h>

int main(void){
    int n, num;
    int i,j;
    int count = 0;
    int is_prime;
    
    scanf("%d", &n);
    for (i=0; i <= n-1; i++){
        scanf("%d", &num);
        is_prime = 1;
        
        for (j=2; j <=num-1 ; j++){
            if(num%j==0){
                is_prime= 0;
            
            }
        }
        
        if (is_prime==1){
            count++; 
        }
    } 
    printf("%d\n", count);
    return 0;
}