#include <stdio.h>

int main(){
    
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    int soma, sub, mul;
    soma = a+b;
    sub = a-b;
    mul = a*b;
    
    if(soma>=sub && soma>=mul)
        printf("%d", soma);
    else if (sub>=soma && sub>=mul) 
        printf("%d", sub);
    else 
        printf("%d", mul);
    
    return 0;
}
