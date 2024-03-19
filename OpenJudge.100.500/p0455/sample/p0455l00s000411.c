#include <stdio.h>

void calc(int a){
    printf("%d", a + a*a + a*a*a);
}

int main(){
    int a = 2;
    calc(a);
}