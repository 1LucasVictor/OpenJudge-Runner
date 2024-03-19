#include <stdio.h>

int main(){
    
    int a, b, x;
    // a: known cats; b:animals; x: qntd of cats
    
    scanf("%d %d %d", &a, &b, &x);
    
    if (a+b<x || a>x){
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }
    
    return 0;
}
