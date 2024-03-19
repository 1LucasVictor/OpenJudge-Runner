#include <stdio.h>
int main(void){
  int N, K, a, b;
    scanf("%d", &N); scanf("%d", &K);
    if (N < 0) N = N * -1;
    a = N % K;
    b = a - K; 
  	if(b < 0) b = b * -1;
    if (a < b) printf("%d", a);
    else printf("%d", b);
    return 0;
}