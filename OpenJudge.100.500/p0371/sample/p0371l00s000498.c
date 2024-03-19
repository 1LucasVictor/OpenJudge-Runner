#include <stdio.h>

int main(){
    int i, n;
    long a, max, min, sum = 0;
    scanf("%d\n", &n);
    if(n < 0 || n > 10000) return 0; 
    
    for(i = 1; i <= n; i++){
        scanf("%ld", &a);
        if(a < -1000000 || a > 1000000){
            break;
        }
        if(i == 1){
            max = a;
            min = a;
            sum = a;
        }else if(i > 1){
            if(a > max){max = a;}
            if(a < min){min = a;}
            sum += a;          
        }
    }
    
    printf("%ld %ld %ld\n", min, max, sum);
    return 0;
}