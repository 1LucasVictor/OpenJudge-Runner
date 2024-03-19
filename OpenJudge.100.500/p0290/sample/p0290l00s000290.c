#include <stdio.h>

#define TRUE 1
#define FALSE 0

/* int isPrime(int n){ */
/*     int i; */
/*     if(n==1) return FALSE; */
/*     for(i=n-1; i>1; i--){ */
/*         if (n % i == 0){ */
/*             return FALSE; */
/*         } */
/*     } */
/*     return TRUE; */
/* } */
int mypow(int n, int m, int l){
    int i;
    int res = 1;
    for(i=0;i<m;i++) res = n * res;
    return res % l;
}


int isPrime(int n){
    if(n == 2) return TRUE;
    if(n < 2 || (n & 1) == 0) return FALSE;
    return (mypow(2, n-1, n) == 1);
}

int main(){
    int i, n, s, cnt=0;
    int data[10000];
    scanf("%d", &n);
    for(i=0;i<n;i++) scanf("%d", &data[i]);
    for(i=0;i<n;i++){
        if(isPrime(data[i])) cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}