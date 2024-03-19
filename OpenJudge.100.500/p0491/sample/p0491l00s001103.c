#include <stdio.h>
int main(void){
  long int N, K, a, b;
    scanf("%ld", &N); scanf("%ld", &K);
    a = N % K;
    b = a - K;
  	if(b < 0) b *= -1;
    if (a < b) printf("%ld\n", a);
    else printf("%ld\n", b);
    return 0;
}