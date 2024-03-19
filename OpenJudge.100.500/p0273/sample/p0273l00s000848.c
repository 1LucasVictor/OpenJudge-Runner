#include  <stdio.h>
#define MAX 45

int result[MAX];

int Fib(int n){
    int i;

    result[0] = result[1] = 1;

    for(i = 2; i <= n; i++)
        result[i] = result[i-1] + result[i-2];

    return result[n];
}

int main() {
    int i;
    int n;
    int ans;

    scanf("%d", &n); 
    printf("%d\n", Fib(n));

    return 0;
}