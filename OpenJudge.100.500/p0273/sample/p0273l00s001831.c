#include <stdio.h>
#define MAX 45

//int Fibonacci(int);
int aFibonacci(int);

int main(){
    int n;

    scanf("%d",&n);

    printf("%d\n",aFibonacci(n));

    return 0;
}

/*int Fibonacci(int n){
    if(n == 1 || n == 0)return 1;
    
    return Fibonacci(n - 1) + Fibonacci(n -2);
}*/

int aFibonacci(int x){
    int F[MAX];
    F[0] = F[1] = 1;
    for(int i = 2;i < MAX;i++){
        F[i] = F[i - 1] + F[i - 2];
    }
    return F[x];
}
