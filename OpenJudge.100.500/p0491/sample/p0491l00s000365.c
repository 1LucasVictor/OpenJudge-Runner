#include <stdio.h>
int main(void){
  int N, K, a, b;
    scanf("%d", &N); scanf("%d", &K);
    a = N % K;
    b = a - K; 
  	if(b < 0) b = b * -1;
    if (a < b) printf("%d\n", a);
    else printf("%d\n", b);
    return 0;
}