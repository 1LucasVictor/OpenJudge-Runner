#include<stdio.h>

// If prime, return 1, else return 0.
int isPrime(int num){
    int rtn = 1;
    int i;
    
    for(i=2; i*i <= num; i++){
        if(num%i == 0){
            rtn = 0;
            break;
        }
    }
    return rtn;
}

int main(void){
    int sum, num;
    int i;
    int ans = 0;
    
    scanf("%d", &sum);
    
    for(i=0; i<sum; i++){
        scanf("%d", &num);
        if(isPrime(num)) ans++;
    }
    
    printf("%d\n",ans);
    
    return 0;
}