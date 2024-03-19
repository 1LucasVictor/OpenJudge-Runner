#include <stdio.h>

void calc(int a){
    printf("%d", a + a*a + a*a*a);
    return;
}

int main(){
    int a;
    scanf("%d",&a);
    calc(a);
}