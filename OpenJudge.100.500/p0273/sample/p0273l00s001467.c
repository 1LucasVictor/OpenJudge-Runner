#include<stdio.h>

int f[45] = {0};

int fibonacci(int n) {
    if (n == 0 || n == 1) f[n] = 1;
    if (f[n] != 0) return f[n];
    return f[n] = fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n, t;
    
    scanf("%d", &n);
    t = fibonacci(n);
    printf("%d\n",t);
    return 0;
}