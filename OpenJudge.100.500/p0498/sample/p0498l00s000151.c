#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n, p;
    scanf("%d", &n);
    if(n%2)
      p = n/2 + 1;
    else
      p = n/2;
    printf("%d", p);
    return 0;
}
