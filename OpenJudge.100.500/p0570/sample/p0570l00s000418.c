#include <stdio.h>
int main(void){
    int a, b, k;
    int i;
    scanf("%d %d",&a ,&b);
    i = a+b;
    if(i % 2 == 0){
        k = i/2;
        printf("%d",k);
    }else{
        printf("IMPOSSIBLE");
    }
    return 0;
}