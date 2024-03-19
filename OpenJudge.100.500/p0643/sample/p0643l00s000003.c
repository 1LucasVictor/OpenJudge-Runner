//割り算のあまりが0なら真理値は偽
#include <stdio.h>
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    puts(a*b%2 ? "Odd" : "Even"); 
    return 0;
}
