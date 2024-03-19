#include <stdio.h>

int calc(int a){
    return a + a*a + a*a*a; 
}

int main(){
    int a;
    scanf("%d",&a);
    printf("%d\n",calc(a));
    return 0;
}