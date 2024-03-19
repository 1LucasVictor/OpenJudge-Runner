#include<stdio.h>

int memo[50] = {0};

int fib(int i){
    if(i == 0 || i == 1){
        return 1;
    } else if(i > 1){
        if(memo[i] == 0){
            memo[i] = fib(i-1) + fib(i-2);
        }
        return memo[i];
    } else {
        return 0;
    }
}

int main(){
    int n, a;
    scanf("%d", &n);
    
    a = fib(n-1) + fib(n-2);
    
    printf("%d\n", a);
    
    return 0;
}

