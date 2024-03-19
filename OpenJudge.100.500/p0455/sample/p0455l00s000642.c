#include <stdio.h>

int a(int a){
    return a+a*a+a*a*a;
}

int main(){
    int b;
    scanf("%d",&b);
    printf("%d\n",a(b));
}