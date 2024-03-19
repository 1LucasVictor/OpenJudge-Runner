#include <stdio.h>

int F[50];

int fibonacci(int n){
    if ( n == 0 || n == 1 ) 
        F[n] = 1;
    if ( F[n] != NULL ) return F[n];
    return F[n] = fibonacci(n-2) + fibonacci(n-1);
}

int main(){
    int N;
    scanf("%d\n",&N);
    fibonacci(N);
    printf("%d\n",F[N]);
    return 0;
}
