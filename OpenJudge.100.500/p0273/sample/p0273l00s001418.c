#include <stdio.h>

#define MAX 44

int fib(int);


int main() {
    
    int n;
    
    scanf("%d",&n);
    
    if(n==0 || n==1) printf("1\n");
    if(n>1) printf("%d\n",fib(n));
    
    return 0;
}


int fib(int x) {
    
    int i,F[MAX];
    
    F[0] = 1;
    F[1] = 1;
    for(i=2; i<=x; i++) F[i] = F[i-1]+F[i-2];
    
    return F[x];
}