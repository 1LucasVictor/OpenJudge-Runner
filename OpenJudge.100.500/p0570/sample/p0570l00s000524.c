#include<stdio.h>

int main(){
    int a, b, c, d;

    scanf("%d",&a);
    scanf("%d",&b);

    c = a + b;

    if(c%2){
        printf("IMPOSSIBLE\n");
    }
    else{
        d = c / 2;
        printf("%d\n", d);
    }

    return 0;
}