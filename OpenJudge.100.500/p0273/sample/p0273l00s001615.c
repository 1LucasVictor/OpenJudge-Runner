#include <stdio.h>
int F[10000];

/*フィボナッチ＠動的計画法*/
int Dynamic_Fibonacci(int n) {
    int i;
    
    F[0] = F[1] = 1;
    
    for(i = 2 ; i <= n ; i++)
        F[i] = F[i - 1] + F[i - 2];
    
    return F[n];
}
/*フィボナッチ＠メモ化*/
int Memorize_Fibonacch(int n) {
    
    if(n == 0 || n == 1) {
        /*メモ*/
        F[n] = 1;
        return F[n];
    }
    /*メモを利用してメモをし、また使えるようにして返す*/
    F[n] = F[n - 1] + F[n - 2];
    /*終わったらメモごと返す(nに達すればそのまま帰る)*/
    return F[n];
}

int main(void)
{
    int n;
    scanf("%d" , &n);
    printf("%d\n" , Dynamic_Fibonacci(n));
    
    return 0;
}

