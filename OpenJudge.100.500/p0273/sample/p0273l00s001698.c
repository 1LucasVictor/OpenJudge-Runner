#include<stdio.h>
#include<stdlib.h>


#define N 45
int F[N];

int fibonacci(int n){
    if(n == 0 || n ==1){
        return F[n] = 1;
    }
    if(F[n] == 1){
        return F[n];
    }
        return F[n] = fibonacci(n - 2) + fibonacci(n -1);
}


int main(){
    int n;

    scanf("%d",&n);
    printf("%d\n",fibonacci(n));

    return 0;
}


